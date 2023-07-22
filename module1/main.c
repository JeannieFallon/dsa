/* Module 1: ArrayList */
#include <stdio.h>
#include <stdlib.h>
#include "mod1.h"

char ACTIONS[] = "0\tQuit\n1\tPrint array\n2\tAdd to front of array\n";

int main() {
    printf("*** Module 1: ArrayList (integers only) ***\n");

    // Initialize ArrayList
    struct array_list* arrlst = malloc(sizeof(struct array_list));
    init(arrlst);

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
                printf("\nGoodbye!\n");
                break;
            case 1:
                print_arr(arrlst);
                break;
            case 2:
                add_to_front(arrlst);
                break;
            default:
                printf("Action not availble\n");
        }

    } while (ans != 0);

    return 0;
}
