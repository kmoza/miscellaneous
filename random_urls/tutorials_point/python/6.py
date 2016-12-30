import sys

list = [1,2,3,4]

it = iter(list)

for x in it:
    print x

#print 'another way of printing'

while True:
    try:
        print (next(it))
    except StopIteration:
        sys.exit()

