class Celsius:
    def __init__(self, temperature=0):
        print("init")
        self.temperature = temperature

    def to_fahrenheit(self):
        return (self.temperature * 18) + 32

    def get_temperature(self):
        print("getter")
        return self._temperature

    def set_temperature(self, value):
        print("setter")
        if value < -273.15:
            raise ValueError("temp below 273.15 not possible")
        self._temperature = value

    # create property object
    temperature = property(get_temperature, set_temperature)


human = Celsius(37)
print(human.__dict__)
print(human.temperature)
print(human.to_fahrenheit())
human.temperature = -300
