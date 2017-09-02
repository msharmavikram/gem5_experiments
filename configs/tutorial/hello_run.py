import m5 
from m5.objects import * 

root = Root(full_system = False)

root.hello = HelloObject(time_to_wait='2us', number_of_fires=10)

m5.instantiate()

print "Bringing to run sim"

exit_event = m5.simulate()

print 'Exiting @ tick %i because %s' % (m5.curTick(), exit_event.getCause())
