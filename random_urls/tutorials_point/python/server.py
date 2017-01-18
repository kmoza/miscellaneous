import socket

# create a socket
serversocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# get local machine name
host = socket.gethostname()

port = 9999

# bind to the port
serversocket.bind((host, port))

# queue upto 5 requests
serversocket.listen(5)

while True:
	# establist a connection
	clientsocket, addr = serversocket.accept()
	print 'Got a connection from : %s' % str(addr)
	msg = 'than you for connecting' + '\r\n'
	clientsocket.send(msg.encoder('ascii'))
	clientsocket.close()	
