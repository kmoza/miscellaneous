try:
    fh = open('testfile', 'r')
    fh.write('this is my test file again for exception handling')
except IOError:
    print 'error cant find the file or read data'
else:
    print 'written content in the file successfully'
