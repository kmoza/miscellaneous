fo = open('file.txt', 'r+')
str = fo.read(10)
print 'string read is = ', str

position = fo.tell()
print 'current file position = ' , position

position = fo.seek(0, 0)
str = fo.read(10)
print 'again readinf string is = ', str

fo.close()
