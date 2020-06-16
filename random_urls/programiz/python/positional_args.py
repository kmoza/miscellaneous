def greet(name,msg = "Good morning!"):
    print(msg, name)

greet("Alex", msg="Hello")
greet(name = "Bruce",msg = "How do you do?")
greet(msg = "How do you do?",name = "Bruce") 
greet("Bruce", msg = "How do you do?")
