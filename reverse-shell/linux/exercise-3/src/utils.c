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

// TODO: Add functionality to check if the ipaddr is a valid ipv4 address. Return true on success and false on failure.
bool is_valid_ipv4(char *ipaddr) {
    return false;
}

// TODO: Add functionality to create a socket and return -1 if fail or the socket fd on success.
int create_socket(void) {
    return -1;
}

// TODO: Add functionality to connect to a socket and return -1 on fail or 0 on success.
int connect_socket(int sockfd, struct sockaddr *addr, socklen_t addrlen) {
    return -1;
}