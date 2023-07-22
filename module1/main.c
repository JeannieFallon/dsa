/* Module 1: ArrayList */
#include <stdio.h>
#include <stdlib.h>
#include "mod1.h"

char ACTIONS[] =
    "0\tQuit\n"
    "1\tPrint array\n"
    "2\tAdd to front of array\n"
    "3\tAdd to back of array\n"
    "4\tRemove from front\n"
    "5\tRemove from back\n";

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
            case 3:
                add_to_back(arrlst);
                break;
            case 4:
                remove_from_front(arrlst);
                break;
            case 5:
                remove_from_back(arrlst);
                break;
            default:
                printf("Action not availble\n");
        }

    } while (ans != 0);

    return 0;
}
