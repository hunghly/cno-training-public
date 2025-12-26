/**
 * Instructions: You will need to complete all the TODOs to complete this task. You can implement some of the
 * socket code by using the wrapper calls in utils.c or just implement it directly in the 'main' function.
 * 
 * The goal of this exercise is to create the server portion of the RAT. See the RAW.drawio.png file.
 * - You will need to create a socket and listen on port 8888
 * - Once the client (exercise 2) connects to the server, prompt the user to enter 1 to 5 options.
 *      Action 1) Should list system information
 *      Action 2) Should list running processes
 *      Action 3) Should upload test implant i.e. fake-implant.bin and execute it
 *      Action 4) Should kill the client
 *      Action 5) Should shutdown the server
 * - You are only allowed to pass 1024 bytes of data between server and client at any given time.
 * - For action 3, you must upload a test implant to the client and execute it. There is a fake-implant project that you can use
 *   to complete this task.
 * - Your server should be able to handle common server/client challenges i.e. reconnects, timeouts, etc. 
 * See demo gifs for examples of each action.
 *
 */

#include <arpa/inet.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <unistd.h>
#include "../include/utils.h"

#define PORT 8888
#define BACKLOG 1
#define IMPLANT_FILE_PATH "./output/fake-implant.bin"   // TODO: Replace this path as needed

int main() {

    // TODO: Declare variables here

    // TODO: Create server socket

    // TODO: Add optional server socket options

    // TODO: Bind the socket

    // TODO: Listen on the socket. You only need 1 connection at a time so set the backlog accordingly.


    /* TODO:
    Read/Write data to/from the client as needed
    Implement the following requirements:
    - Prompt user to enter a number between 1 - 5
    - Action 1) Should list system information
    - Action 2) Should list running processes
    - Action 3) Should upload test implant i.e. fake-implant.bin and execute it
    - Action 4) Should kill the client
    - Action 5) Should shutdown the server
    */
    while (true) {
        
    }

    // TODO: Perform cleanup as needed
    exit(EXIT_SUCCESS);
}
