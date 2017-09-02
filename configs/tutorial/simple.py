
#Import library for M5 system and all the compiled libs
import m5
from m5.objects import *

#Create a system 
system = System()
#Create timing and voltage values for the system
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '1GHz'
system.clk_domain.voltage_domain = VoltageDomain() 

#Define type of mem mode and addr range
system.mem_mode = 'timing'
system.mem_ranges = [AddrRange('512MB')]

#Call a simple clock by clock execute system 
system.cpu = TimingSimpleCPU()

#System wide memory bus

system.membus = SystemXBar()

#This model is a no cache system. Hence Membus is connected to id cache

system.cpu.icache_port = system.membus.slave
system.cpu.dcache_port = system.membus.slave

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
