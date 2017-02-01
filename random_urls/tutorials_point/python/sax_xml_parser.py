import xml.sax

class MovieHandler(xml.sax.ContentHandler):
	def __init__(self):
		self.CurrentData = ''
		self.type = ''
		self.format = ''
		self.year = ''
		self.rating = ''
		self.stars = ''
		self.description = ''

	# call when an element starts
	def startElement(self, tag, attributes):
		self.CurrentData = tag
		if tag == 'movie':
			print '****Movie****'
			title = attributes['title']
			print 'Ttile: ', title

	# call when an elements ends
	def endElement(self, tag):
		if self.CurrentData == 'type':
			print 'Type:', self.type
		elif self.CurrentData == 'format':
			print 'Format:', self.format
		elif self.CurrentData == 'year':
			print 'Year:', self.year
			