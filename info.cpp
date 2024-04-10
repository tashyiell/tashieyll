A client app send a request to a server app.
The server app returns a reply.
Some of the basic data communications between client and server are:
File transfer - sends name and gets a file.
Web page - sends url and gets a page.
Echo - sends a message and gets it back



Socket - summary
Here is the summary of key concepts:

Socket is a way of speaking to other programs using standard file descriptors.
Where do we get the file descriptor for network communication?
Well, we make a call to the socket() system routine.
After the socket() returns the socket descriptor, we start communicate through it using the specialized send()/recv() socket API calls.
A TCP socket is an endpoint instance
A TCP socket is not a connection, it is the endpoint of a specific connection.
A TCP connection is defined by two endpoints aka sockets.
The purpose of ports is to differentiate multiple endpoints on a given network address.
The port numbers are encoded in the transport protocol packet header, and they can be readily interpreted not only by the sending and receiving computers, but also by other components of the networking infrastructure. In particular, firewalls are commonly configured to differentiate between packets based on their source or destination port numbers as in port forwarding.
It is the socket pair (the 4-tuple consisting of the client IP address, client port number, server IP address, and server port number) that specifies the two endpoints that uniquely identifies each TCP connection in an internet.
Only one process may bind to a specific IP address and port combination using the same transport protocol. Otherwise, we'll have port conflicts, where multiple programs attempt to bind to the same port numbers on the same IP address using the same protocol.



