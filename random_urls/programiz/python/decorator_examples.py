def smart_divide(func):
    def inner(a,b):
        print("dividing {} and {}".format(a, b))
        if b==0:
            print("division by 0")
            return 
        return func(a,b)
    return inner

@smart_divide
def divide(a,b):
    print(a/b)

print(divide(2,0))

def works_for_all(func):
    def inner(*args, **kwargs):
        print("I can decorate any function")
        return func(*args, **kwargs)
    return inner