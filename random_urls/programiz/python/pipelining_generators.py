def fibonnaci_numbers(nums):
    x,y=0,1
    for _ in range(nums):
        x,y = y,x+y
        yield x

def squares(nums):
    for num in nums:
        yield num**2

print(sum(squares(fibonnaci_numbers(10))))