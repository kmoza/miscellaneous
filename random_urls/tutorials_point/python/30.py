class Parent:
    def myMethod(self):
        print 'calling parent method'

class Child(Parent):
    def myMethod(self):
        print 'calling child method'

c = Child()
c.myMethod()
