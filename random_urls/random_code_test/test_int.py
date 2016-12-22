def is_int(x):
    x = abs(x)
    while x > 0:
        x = x - 1
    if x == 0:
        return "Num is int"
    else:
        return "Num is not int"
