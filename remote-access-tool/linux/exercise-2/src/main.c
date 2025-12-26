/**
 * Instructions: You will need to complete all the TODOs to complete this task. You can implement some of the
 * socket code by using the wrapper calls in utils.c or just implement it directly in the 'main' function.
 *
 * The goal of this exercise is to create the client portion of the RAT. See the RAW.drawio.png file.
 * - You will need to create a socket and connect to the server on port 8888.
 * - Once the client connects to the server, it will wait until an opcode is received.
 * - When an opcode is received, the client performs one of the actions.
 *      Action 1) Should list system information
 *      Action 2) Should list running processes
 *      Action 3) Should upload test implant i.e. fake-implant.bin and execute it
 *      Action 4) Should kill the client
 * - You are only allowed to pass 1024 bytes of data between server and client at any given time.
 * - Your server should be able to handle common server/client challenges i.e. reconnects, timeouts, etc. 
 * - See demo gifs for examples of each action.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <string.h>
#include <stdbool.h>
#include "../include/utils.h"

#define PORT 8888

void usage(char* prog_name);

int main(int argc, char** argv) {

    if (argc < 2) {
        usage(argv[0]);
        exit(EXIT_FAILURE);
    }

    // TODO: Declare variables here
    bool connected = false;

    // TODO: Retrieve server ip from passed in argument and check if it's a valid ipv4 address

    while (1) {
        if (!connected) {
            // TODO: Create connection socket to the server

            // TODO: Set up the address structure. Set it up to target the server ip on the defined PORT. Also use ipv4.

            // TODO: Set client socket options. At minimum set your timeouts for the sockets to avoid it hanging on send/recvs.
            connected = true;
        }
                
        // TODO: Recieve opcodes and perform work

    }

    // TODO: Perform cleanup as needed
    exit(EXIT_SUCCESS);
}

void usage(char* prog_name) {
    fprintf(stderr, "Usage: %s <ip>\n", prog_name);
}
