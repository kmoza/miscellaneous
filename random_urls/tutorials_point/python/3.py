import sys

try:
    #open file stream
    file = open(file_name, "w")
except IOError:
    print 'There was an error writing to' + file_name
    sys.exit()

print 'enter'
print 'when finished'

while file_text != file_finish:

