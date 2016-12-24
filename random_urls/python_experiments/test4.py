def say_hello(name):
    return "Hello, " + name

#Now the value of foo is "Hello, Alice"
foo = say_hello("Alice")

#Now the value of fun is a function object we can use like the original function
fun = say_hello

bar = fun("Bob")

print foo
print bar