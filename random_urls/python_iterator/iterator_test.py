class Repeater:
	def __init__(self, value):
		self.value = value

	def __iter__(self):
		return RepeaterIterator(self)


class RepeaterIterator:
	def __init__(self, source):
		self.source = source

	def __next__(self):
		return self.source.value

# repeater = Repeater("Hello")

# for item in repeater:
# 	print(item)

# repeater = Repeater("hello")
# iterator = repeater.__iter__()
# while True:
# 	item = iterator.__next__()
# 	print(item)

# another iterating method
repeater = Repeater("Hello")
iterator = iter(repeater)
print(next(iterator))
print(next(iterator))