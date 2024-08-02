# Lab 2

## Objective

- To implement a client server communication using TCP

## Theory

- Client Server communication is a type of communication that consists of a server that host the communication and client that is connected to the server in some port.
- TCP (Transmission Control Protocol) is a protocol used in communication systems that are relaiable and consists of handsakes which confirms the connection between the communicating parties before sending the data. 
- Every data is sent to the recieving end and in case of loss the portocol will try again to reconnect to the recieving side and send the message once again.
- Although it is slower than UDP (User Datagram Protocol) but is more reliable.

## Code

[client side](https://github.com/college-related/Labs-7th-sems/tree/main/Distributed%20System%20(DS)/lab2/ClientTCP.java)

[server side](https://github.com/college-related/Labs-7th-sems/tree/main/Distributed%20System%20(DS)/lab2/ServerTCP.java)

## Output

```
hello                   client says: hello
Server says: hi         hi
namaste                 client says: namaste
Server says: namaste    namaste
bye                     client says: bye
Server says: bye        bye
```