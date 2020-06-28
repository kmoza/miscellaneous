def mygen():
    n = 1
    print("printed first")
    yield n

    n += 1
    print("printed second")
    yield n

    n += 1
    print("printed last")
    yield n


a = mygen()
print(next(a))
print(next(a))
print(next(a))
print(next(a))

