/**
 * Instructions: To complete this exercise, you need to implement all the functions.
 * There is a list of TODOs that will guide you to complete these functions. Do your
 * reseach and implement the functions accordingly.
 *
 * 1. Make sure to error check as needed
 * 2. Make sure return values are specified as the TODO indicates. You can make changes as needed for your design choice.
 *
 */
// TODO: Include all of your headers for your functions implementations
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../include/utils.h"

// TODO: Add functionality to create a socket and return -1 if fail or the socket fd on success
int create_socket(void) {
    return -1;
}

// TODO: Add functionality to bind a socket and return -1 if fail or 0 on success
int bind_socket(int clientfd, struct sockaddr *addr, socklen_t addrlen) {
    return -1; 
}

// TODO: Add functionality to listen on a socket and return -1 if fail or 0 on success.
int listen_socket(int clientfd, int backlog) {
    return -1;
}

// TODO: Add functionality to accept a connection and return -1 if fail or the client socket fd on success
int accept_socket(int clientfd, struct sockaddr *addr, socklen_t *addrlen) {
    return -1;
}

// TODO: Implement functionality to submit a SERVER_OP_SYS_INFO request to the client. Return -1 on fail and 0 on success.
int request_sys_info(int clientfd) {
    return -1;
}

// TODO: Implement functionality to submit a SERVER_OP_PROC_INFO request to the client. Return -1 on fail and 0 on success.
int request_proc_info(int clientfd) {
    return -1;
}

/* TODO: 
Implement functionality to submit a SERVER_OP_START_IMPLANT request to the client. 
As part of this function, do the the following:
1. Send the command.
2. Upload the implant to client.
3. Wait for confirmation from the server i.e. SERVER_OP_SUCCESS or SERVER_OP_FAIL
Return -1 on fail and 0 on success.
*/
int request_start_implant(int clientfd, char* filepath) {
    // TODO: Declare variables here

    // TODO: Send SERVER_OP_START_IMPLANT command

    // TODO: Verify implant file exists

    // TODO: Send the implant to client

    // TODO: Wait for SERVER_OP_SUCCESS or SERVER_OP_FAIL and handle accordingly

    // TODO: Clean up as needed

    return -1;
}

// TODO: Implement funcitonality to submit a SERVER_OP_CLIENT_KILL request to the client. Return -1 on fail and 0 on success.
int request_client_kill(int clientfd) {
    return -1;
}

// This function displays the list of available commands as well as prompts the user to enter a number. 
// It returns the command on success and -1 on failure.
int prompt_user() {
    int input = -1;
    printf("The following actions are available for execution:\n\n");
    printf("\t1. Retrieve System Information.\n");
    printf("\t2. Retrieve Running Processes.\n");
    printf("\t3. Upload implant to client and execute.\n");
    printf("\t4. Kill client process.\n");
    printf("\t5. Shutdown server.\n");

    printf("Select an action [1-5]: ");
    if (scanf("%d", &input) != 1) {
        fprintf(stderr, "Invalid input found\n");
        // flush out stdin buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        return -1;
    }

    return input;
}