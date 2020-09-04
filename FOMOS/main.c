#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "include/FOMOS/finishSetup.h"
#include "include/FOMOS/power/power.h"
#include "include/FOMOS/commands/commands.h"

int power = 1;

void CL() {
    char command[50];

    printf("\n$ ");
    scanf("%s", command);
    if(!strcmp(command, "help")) {
        help();
    } else if (!strcmp(command, "shutdown")) {
        shutdown();
        power = 0;
    } else if (!strcmp(command, "restart")) {
        restart();
        power = 0;
    } else if (!strcmp(command, "rndmstf")) {
        system("sh waouegfw93333333333333ouawoeuyr320k.sh");
    } else if (!strcmp(command, "Fopen")) {
        // not fopen() from stdio.h
        Fopen();
    }
    else {
        printf("%s is not a command\n", command);
    }

}

int main() {
    // before v2 release uncomment this part
    // finish_setup();
    printf("\a");
    printf("FOMOSv2-CL \n");
    system("sh users/user.sh");
    for (;;) {
        CL();
    }

}
