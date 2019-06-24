import weakref

class FooType(object):
	def __init__(self, id, parent):
		self.id = id
		self.parent = weakref.ref(parent)
		print("Foo {} born".format(self.id))

	def __del__(self):
		print("Foo {} died".format(self.id))

class BarType(object):
	def __init__(self, id):
		self.id = id
		self.foo = FooType(id, self)
		print("Bar {} born".format(self.id))

	def __del__(self):
		print("Bar {} died".format(self.id))

b = BarType(12)