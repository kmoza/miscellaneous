fo = open('file.txt', 'wb')
print 'name of the file', fo.name
print 'closed or not', fo.closed
print 'opening mode', fo.mode
fo.close()
