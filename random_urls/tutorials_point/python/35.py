import re

phone = '2004-959-550 # this is phone number'

# delete python style comments
num = re.sub(r'#.*$', '',phone)
print 'Phone num : ', num

# remove anythin other than digits
num = re.sub(r'\D', '', phone)
print 'Phone num : ', num

