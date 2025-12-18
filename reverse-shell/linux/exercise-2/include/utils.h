#pragma once

// TODO: Include all of your headers for your functions prototypes
#include <arpa/inet.h>

// TODO: Declare your function prototypes
int create_socket();
int bind_socket(int sockfd, struct sockaddr *addr, socklen_t addrlen);
int listen_socket(int sockfd, int backlog);
int accept_socket(int sockfd, struct sockaddr *addr, socklen_t *addrlen);