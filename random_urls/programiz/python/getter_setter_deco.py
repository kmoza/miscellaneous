class Celsius:
    def __init__(self, temperature=0):
        self.temperature = temperature

    def to_fahrenheit(self):
        return (self.temperature * 18)+32

    @property
    def temperature(self):
        print("getter")
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        print("setter")
        if value < -273.15:
            raise ValueError("invalid value")
        self._temperature = value


human = Celsius(37)
print(human.temperature)
print(human.to_fahrenheit())
coldest = Celsius(-300)
