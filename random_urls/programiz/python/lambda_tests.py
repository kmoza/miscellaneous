#labmda arguments: expressions/statement

double = lambda x: x*2
print(type(double))
print(double(10))

mylist = [1,2,3,4,5,6,7,8,9]
newlist = filter(lambda x: (x%2 == 0), mylist)
print(type(mylist))
print(newlist)


my_list = [1, 5, 4, 6, 8, 11, 3, 12]

new_list = list(filter(lambda x: (x%2 == 0) , my_list))

print(new_list)

newlist2 =  map(lambda x: x*2, my_list)
print(newlist2)