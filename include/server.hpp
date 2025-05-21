#ifndef SERVER_HPP
#define SERVER_HPP

#include <string>

class Server {
public:
    // Constructor that Initializes the server with the specified port
    Server(int port);
    void run(); // This is the main HTTP server loop

private:
    int port;
    int serverSocket;

    // Encapsualtes socket creation, binding, and listening
    void setupSocket();

    // Reads request/ Sends Response to local client
    void handleClient(int clientSocket);
};

#endif // SERVER_HPP