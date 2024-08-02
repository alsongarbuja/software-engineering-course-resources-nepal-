# Lab 1

## Objective

- To implement a client server communication using UDP

## Theory

- Client Server communication is a type of communication that consists of a server that host the communication and client that is connected to the server in some port.
- UDP (User Datagram Protocol) is a protocol used in communication systems that are unrelaiable and doesnot consists of handsakes which confirms the connection between the communicating parties before sending the data.
- Not every data is sent to the recieving end and in case of loss the portocol will not resend the packets.
- Although it is faster than TCP (Transmission Control Protocol) but is less reliable.

## Code

[client side](https://github.com/college-related/Labs-7th-sems/tree/main/Distributed%20System%20(DS)/lab1/ClientUDP.java)

[server side](https://github.com/college-related/Labs-7th-sems/tree/main/Distributed%20System%20(DS)/lab1/ServerUDP.java)

## Output

```
hello       Client:- hello
hi          Client:- hi
namaste     Client:- namaste
bye         Client:- bye
            Client sent bye.....EXITING
```