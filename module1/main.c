/* Module 1: ArrayList */
#include <stdio.h>
#include "mod1.h"

char ACTIONS[] = "0\tQuit\n1\tPrint array\n";

int main(int argc, char **argv) {
    printf("*** Module 1: ArrayList ***\n");

    int ans = -1;

    do {
        printf("\nChoose an action:\n");
        printf("-----\n");
        printf("%s", ACTIONS);
        printf("-----\n");

        scanf("%d", &ans);

        switch(ans) {
            case 0:
                printf("Goodbye!\n");
                break;
            case 1:
                print_arr();
                break;
            default:
                printf("Action not availble\n");
        }

    } while (ans != 0);

    return 0;
}
