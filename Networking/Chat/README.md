# Chat 

This project is a simple command-line chat client that uses the Boost.Asio library to communicate with a chat server over TCP. The client can connect to the server, send messages, and receive messages from other clients connected to the server.


## How it works 

The client uses the client class to connect to the server and handle the communication. The class takes in a nickname, an instance of ```boost::asio::io_service``` and an iterator to the server endpoint as arguments. Once connected, the client can use the write function to send messages to the server, and the close function to close the connection.

The client also uses the main function to handle the command-line arguments. The program takes in 3 arguments: the nickname, the server hostname and the server port number. The program uses the ```Boost.Asio tcp::resolver``` class to resolve the server endpoint and then creates an instance of the client class to connect to the server.

Once connected, the client enters a loop where it waits for input from the user, and then sends the input as a message to the server. The client also receives messages from the server and displays them on the console.

It is important to note that the code provided only show part of the project, it is only the client part of the project, there should be a server code that the client connects to, and the server should handle the clients connections, the messages broadcasting, and other functionalities.


## Installation 

```Bash 
    git clone https://github.com/UncleJ4ck/IT-Stuff
    cd IT-Stuff/Networking/Chat 
    make all
    ./server <port>
    "Open another terminal"
    ./client <username> <ip> <port>
```


## TO-DO 

[x] Enable more than one user to connect and chat
[x] Multithreading
[ ] Stream Encryption 
[ ] Bugs fixing 
[ ] Add more features like GUI  
