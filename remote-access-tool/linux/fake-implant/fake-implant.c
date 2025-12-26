/**
 * This test binary is used as an implant to be sent to the affected system.
 *
 * All this does is write a message and time to a hidden log file every 15 seconds.
 *
 */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pwd.h>
#include <time.h>
#include <unistd.h>

static void format_time(char *out, size_t out_sz) {
    time_t now = time(NULL);
    struct tm tm_now;
    localtime_r(&now, &tm_now);
    strftime(out, out_sz, "%Y-%m-%d %H:%M:%S %Z", &tm_now);
}

int main() {
    char msg[512];
    char ts[64];
    int msg_len;
    uid_t uid = getuid();
    struct passwd *p;
    FILE *fp;

    if ((fp = fopen("/tmp/.log.txt", "ab+")) == NULL) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    if ((p = getpwuid(uid)) == NULL) {
        perror("getpwuid() error");
        exit(EXIT_FAILURE);
    }

    while (1) {

        // get currrent time
        format_time(ts, sizeof(ts));
    
        msg_len = snprintf(msg, sizeof(msg), "Hello %s, you got pwned at %s\n", p->pw_name, ts);
        
        if (msg_len > 0) {
            if (msg_len != fwrite(msg, sizeof(char), msg_len, fp)) {
                fprintf(stderr, "fwrite error %s\n", strerror(errno));
            }
        }

        fflush(fp);
        sleep(15);
    }

    fclose(fp);    
    exit(EXIT_SUCCESS);
}
