/* Module 1: ArrayList */
#include <stdio.h>
#include "mod1.h"

char ACTIONS[] = "0\tQuit\n1\tPrint array\n";

int main() {
    printf("*** Module 1: ArrayList (integers only) ***\n");

    // Initialize ArrayList
    init();

    // Loop over user input to control ArrayList
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
