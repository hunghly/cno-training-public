/**
 * Instructions: To complete this exercise, you need to implement all the functions.
 * There is a list of TODOs that will guide you to complete these functions. Do your
 * reseach and implement the functions accordingly.
 *
 * 1. Make sure to error check as needed
 * 2. Make sure return values are specified as the TODO indicates
 *
 */
// TODO: Include all of your headers for your functions implementations
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/utils.h"

// TODO: Add functionality to create a socket and return -1 if fail or the socket fd on success
int create_socket(void) {
    return -1;
}

// TODO: Add functionality to bind a socket and return -1 if fail or 0 on success
int bind_socket(int sockfd, struct sockaddr *addr, socklen_t addrlen) {
    return -1;
}

// TODO: Add functionality to listen on a socket and return -1 if fail or 0 on success.
int listen_socket(int sockfd, int backlog) {
    return -1;
}

// TODO: Add functionality to accept a connection and return -1 if fail or the client socket fd on success
int accept_socket(int sockfd, struct sockaddr *addr, socklen_t *addrlen) {
    return -1;
}