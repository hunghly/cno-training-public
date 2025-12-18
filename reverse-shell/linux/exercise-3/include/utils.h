#pragma once

// TODO: Include all of your headers for your functions prototypes
#include <arpa/inet.h>
#include <stdbool.h>

// TODO: Declare your function prototypes
bool is_valid_ipv4(char *ipaddr);
int create_socket(void);
int connect_socket(int sockfd, struct sockaddr *addr, socklen_t addrlen);