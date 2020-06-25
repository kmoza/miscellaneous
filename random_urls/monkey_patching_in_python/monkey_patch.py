class MonkeyPatch:
    def __init__(self, num):
        self.num = num

    def addition(self, other):
        return (self.num + other)

obj = MonkeyPatch(10)
obj.addition(20)

import inspect
print(inspect.getmembers(obj, predicate=inspect.ismethod))

def subtraction(self, num2):
    return (self.num - num2)

#monkey patch class
MonkeyPatch.subtraction = subtraction
print(inspect.getmembers(obj, predicate=inspect.ismethod))