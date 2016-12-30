import time

ticks = time.time()
print 'number of tick since epoch = ', ticks
print time.localtime()

localtime = time.localtime(time.time())
print 'current time = ', localtime 
