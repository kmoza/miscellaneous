def outer():
    x = "outer"
    def inner():
        nonlocal x
        x = "inner"
        print("inner:", x)
    inner()
    print("outer:", x)
outer()