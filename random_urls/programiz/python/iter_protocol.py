mylist = [4,7,0,3]
myiter = iter(mylist)

print(next(myiter))
print(next(myiter))
print(myiter.__next__())
print(myiter.__next__())

next(myiter)