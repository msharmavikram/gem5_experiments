
#Import library for M5 system and all the compiled libs
import m5
from m5.objects import *
from caches import * 
from optparse import OptionParser
#from common import CpuConfig
#addToPath('../common')

#Opetions for the script
parser = OptionParser()
parser.add_option('--l1i_size',help="L1 I Cache size")
parser.add_option('--l1d_size',help="L1 D Cache size")
parser.add_option('--l2_size',help="L2  Cache size")
#parser.add_option('--cpu_type',help="TimingSimpleCPU,AtomicSimpleCPU")
#parser.add_option('--n',help="Number of CPU - 1,2")

(options,args) = parser.parse_args()

#Create a system 
#CPUClass = options.cpu_type 
#np       = options.n 
#system = System(cpu = [cpu_id=i] for i in xrange(np))
system = System()
#Create timing and voltage values for the system
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '1GHz'
system.clk_domain.voltage_domain = VoltageDomain() 

#Define type of mem mode and addr range
system.mem_mode = 'timing'
system.mem_ranges = [AddrRange('512MB')]

#Call a simple clock by clock execute system 
#system.cpu = TimingSimpleCPU()
system.cpu_0 = TimingSimpleCPU()
system.cpu_1 = TimingSimpleCPU()
#Create L1I/D caches
system.cpu_0.icache = L1ICache(options)
system.cpu_0.dcache = L1DCache(options)
system.cpu_1.icache = L1ICache(options)
system.cpu_1.dcache = L1DCache(options)

#Connect the cache to the system CPU
system.cpu_0.icache.connectCPU(system.cpu)
system.cpu_0.dcache.connectCPU(system.cpu)
system.cpu_1.icache.connectCPU(system.cpu)
system.cpu_1.dcache.connectCPU(system.cpu)
#system.cpu.icache_port = system.membus.slave
#system.cpu.dcache_port = system.membus.slave

#COnnect to L2 cache with a connecting bus
system.l2bus = L2XBar()
system.cpu_0.icache.connectBus(system.l2bus)
system.cpu_0.dcache.connectBus(system.l2bus)
system.cpu_1.icache.connectBus(system.l2bus)
system.cpu_1.dcache.connectBus(system.l2bus)

#System wide memory bus
system.membus = SystemXBar()
#Declare L2 cache and connect them to mem and L2 bus.
system.l2cache = L2Cache(options)
system.l2cache.connectCPUSideBus(system.l2bus)
system.l2cache.connectMemSideBus(system.membus)

#FIXME - Connect mem master with slave
#memobject1.master = memobject2.slave

#x86 Specific lines where PIO, interrupts are connected to masters 
system.cpu.createInterruptController()
#system.cpu.interrupts.pio = system.membus.master
#system.cpu.interrupts.int_master = system.membus.slave
#system.cpu.interrupts.int_slave = system.membus.master
#

#Connect DDR3 1600 MC to the system
system.mem_ctrl = DDR3_1600_8x8()
system.mem_ctrl.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.master

#Conect the ststem to the main bus.
system.system_port = system.membus.slave

#What does CPU execute? 
#process = LiveProcess()
process = Process()
process.cmd = ['tests/test-progs/hello/bin/arm/linux/hello']
system.cpu.workload = process
system.cpu.createThreads()

#Instantiate and execute the system 
root = Root(full_system = False, system = system)
m5.instantiate()

print "Begin Simulation"
exit_event = m5.simulate()


print 'Exiting @ tick %i because %s' % (m5.curTick(), exit_event.getCause())
