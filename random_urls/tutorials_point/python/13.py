def printinfo(arg1, *vartuple):
    'this prints agruments'
    print arg1
    for var in vartuple:
        print var
    return

printinfo(10)
printinfo(70,60,50)

