# Java Networking

Java Networking is a concept of connecting two or more computing devices together so that we can share resources.
Java socket programming provides facility to share data between different computing devices.

## Java Socket Programming

Java Socket programming is used for communication between the applications running on different JRE.
Java Socket programming can be connection-oriented or connection-less.
Socket and ServerSocket classes are used for connection-oriented socket programming and DatagramSocket and DatagramPacket classes are used for connection-less socket programming.

### ServerSocket Class

The ServerSocket class can be used to create a server socket. This object is used to establish communication with the clients.

>Important methods

|Method	 | Description |
|--------|-------------|
|1) public Socket accept() | returns the socket and establish a connection between server and client. |
|2) public synchronized void close() |	closes the server socket. |

### Socket 

A socket is simply an endpoint for communications between the machines. The Socket class can be used to create a socket.

>Important methods

| Method	| Description |
|-----------|-------------|
|1) public InputStream getInputStream() |	returns the InputStream attached with this socket. |
|2) public OutputStream getOutputStream() |	returns the OutputStream attached with this socket. |
|3) public synchronized void close() |	closes this socket |

### URL Class

The Java URL class represents an URL. URL is an acronym for Uniform Resource Locator. It points to a resource on the World Wide Web.
`Example: http://www.javatpoint.com/java-tutorial`

A URL contains many information:

- `Protocol`: In this case, http is the protocol.
- `Server name or IP Address`: In this case, www.javatpoint.com is the server name.
- `Port Number`: It is an optional attribute. If we write http//ww.javatpoint.com:80/sonoojaiswal/ , 80 is the port number. If port number is not mentioned in the URL, it returns -1.
- `File Name or directory name`: In this case, index.jsp is the file name.

>Constructors of Java URL class

- URL(String spec)
	- Creates an instance of a URL from the String representation.

- URL(String protocol, String host, int port, String file)
	- Creates an instance of a URL from the given protocol, host, port number, and file.

- URL(String protocol, String host, int port, String file, URLStreamHandler handler)
	- Creates an instance of a URL from the given protocol, host, port number, file, and handler.

- URL(String protocol, String host, String file)
	- Creates an instance of a URL from the given protocol name, host name, and file name.

- URL(URL context, String spec)
	- Creates an instance of a URL by parsing the given spec within a specified context.

- URL(URL context, String spec, URLStreamHandler handler)
	- Creates an instance of a URL by parsing the given spec with the specified handler within a given context.

>Commonly used methods of Java URL class

The java.net.URL class provides many methods. The important methods of URL class are given below.

| Method |	Description |
|--------|--------------|
|public String getProtocol()	| it returns the protocol of the URL. |
|public String getHost() |	it returns the host name of the URL. |
|public String getPort() |	it returns the Port Number of the URL. |
|public String getFile() |	it returns the file name of the URL. |
|public String getAuthority() |	it returns the authority of the URL. |
|public String toString() |	it returns the string representation of the URL. |
|public String getQuery() |	it returns the query string of the URL. |
|public String getDefaultPort() |	it returns the default port of the URL. |
|public URLConnection openConnection() |	it returns the instance of URLConnection i.e. associated with this URL. |
|public boolean equals(Object obj) |	it compares the URL with the given object. |
|public Object getContent() |	it returns the content of the URL. |
|public String getRef() |	it returns the anchor or reference of the URL. |
|public URI toURI() |	it returns a URI of the URL. |
