class RaceHorse(Horse):
    """A faster horse that inherits from Horse"""
    def movement(self):
        return "run"
    def movement_slow(self):
        return super(Horse,self).movement()
    def __repr__(self):
        return "%s race horse weighing %f and wild status is %b" %(self.color, self.weight, self.wild)

horse3 = RaceHorse("white", 200)
