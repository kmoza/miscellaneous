# # decorator test


# def decor(func):
# 	print "This is decorator"

# @decor
# def func():
# 	print "This is a function"


# def decorator(func):
# 	def wrapper(args, kwargs):
# 		func(args, kwargs)
# 		value = func(*args, kwargs)
# 		print("This is printed after previous return")
# 		return value
# 	return wrapper

# result = func("some string")

def my_decorator(func):
    def wrapper():
        print "Something is happening before the function is called."
        func()
        print "Something is happening after the function is called."
    return wrapper

@my_decorator
def say_whee():
    print "Whee!"

say_whee()