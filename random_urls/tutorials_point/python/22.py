try:
    fh = open('testfile', 'w')
    fh.write('this is my test file for exception handling')
except IOError:
    print 'Error cant find the file or read data'
else:
    print 'written conent in the file successfully'
    fh.close()

