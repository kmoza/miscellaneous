class ClassName(object):
    """This is a class"""
    class_variable
    def __init__(self,*args):
        self.args = args
    def __repr__(self):
        return "Something to represent the object as a string"
    def other_method(self,*args):
        #do something

class Horse(object):
    """Horse represents a horse"""
    species = "Equus ferus caballus"
    def __init__(self,color,weight,wild=false):
        self.color = color
        self.weight = weight
        self.wild = wild
    def __repr__(self):
        return "%s horse weighing %f and wild status is %b" %(self.color, self.weight, self.wild)
    def make_sound(self):
        print "neighhh"
    def movement(self):
        return "walk"