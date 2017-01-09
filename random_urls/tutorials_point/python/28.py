class Employee:
    'commmon base class for all employees'
    empCount = 0


    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        Employee.empCount += 1


    def displayCount(self):
        print 'Total emplooyee %d' %Employee.empCount

    def displayEmployee(self):
        print 'Name : ', self.name, 'Salary : ', self.salary

emp1 = Employee('zara', 2000)
print Employee.__doc__
print Employee.__name__
print Employee.__module__
print Employee.__bases__
print Employee.__dict__
