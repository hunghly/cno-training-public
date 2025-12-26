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
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mount.h>
#include <sys/stat.h>
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
int connect_socket(int serverfd, struct sockaddr *addr, socklen_t addrlen) {
    return -1;
}

/* TODO: 
Add functionality to gather system information from the host.
This function should also send the appropriate response to the server.
You can do multiple things for this. Look into 'uname' or 'lscpu'.
TODO: Optional Requirement: Implement this using 'popen'
Return -1 on fail or 0 on success.
*/ 
int perform_sys_info_request(int serverfd) {

    // TODO: Execute calls that retrieves system information

    // TODO: Send the data back to the server

    // TODO: Clean up as needed

    return -1;
}

/* TODO: 
Add functionality to gather process information from the host.
This function should also send the appropriate response to the server.
You can do multiple things for this. Look into 'top', 'ps', or 'proc'.
TODO: Optional requirement: Implement this using "fork()", "pipe()", and "exec"
Return -1 on fail or 0 on success.
*/ 
int perform_proc_info_request(int serverfd) {

    // TODO: Execute calls that obtain process information

    // TODO: Retrieve data and send back to the server

    // TODO: Clean up as needed

    return -1;
}

/* TODO: 
Add functionality to receive an implant from the server.
It should do the following:
1. Receive bytes from the server (i.e. call `receive_implant()`) and write it to RAM. DO NOT WRITE TO DISK. Look into 'tmpfs' or other options.
2. Execute the implant.
3. Send the appropriate response to the server that it succeeded in starting the implant. If successful, send CLIENT_OP_SUCCESS to server, else send CLIENT_OP_FAIL
Return -1 on fail or 0 on success.
*/ 
int perform_start_implant_request(int serverfd) {

    // TODO: Call receive_implant()

    // TODO: Call execute_implant()

    // TODO: Send CLIENT_OP_SUCCESS or CLIENT_OP_FAIL

    // TODO: Clean up as needed

    return -1;
}

/* TODO: 
Add functionality to receive the implant bytes from the server and store it at 'filepath' or non-disk memory.
Return -1 on fail and 0 on success.
TODO: Optionally, there are other methods that you can use to store the implant. This may change this function prototype.
*/
 int receive_implant(int serverfd, char *filepath) {

    // TODO: Receive the implant bytes from the server

    // TODO: Store implant to RAM          

    // TODO: Clean up as needed

    return -1;
}

/* TODO: 
Add functionality to execute the implant/binary at specified location 'filepath'
Return -1 on fail and 0 on success.
*/
int execute_implant(char* filepath) {

    // TODO: Check file existence

    // TODO: Execute the binary

    // TODO: Clean up as needed
    
    return -1;
}
