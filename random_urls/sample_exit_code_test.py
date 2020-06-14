import sys

def func():
	print "inside func"
	return 255

if __name__ == "__main__":
	print "inside main"
	result = func()
	sys.exit(result)