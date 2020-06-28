mylist = [1, 2, 3, 45]

list1 = [x**2 for x in mylist]

generatorObj = (x**2 for x in mylist)
print(list1)
print(generatorObj)
print(list(generatorObj))
