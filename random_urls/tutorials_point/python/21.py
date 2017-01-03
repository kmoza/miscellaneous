def kelvintofahrenheit(temperature):
    assert(temperature >= 0), 'colder than absolute zero!'
    return ( (temperature - 273) * 1.8) + 32


print kelvintofahrenheit(273)
print int(kelvintofahrenheit(505.78))
print kelvintofahrenheit(-5)
