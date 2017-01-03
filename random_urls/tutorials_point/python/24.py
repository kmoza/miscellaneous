try:
    fh = open('testfile', 'w')
    fh.write('this is my test file for exception handling')
finally:
    print 'error cant read the file or read data'
    fh.close()
