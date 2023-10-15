/* Module 2: LinkedList */
#include <stdio.h>
#include <stdlib.h>

#include "mod2.h"

char ACTIONS[] =
    "0\tQuit\n"
    "1\tPrint list\n";

int main(int argc, char **argv) {
    printf("*** Module 2: LinkedList (integers only) ***\n");

    struct linked_list* llist = malloc(sizeof(struct linked_list));

    // Loop over user input to control LinkedList
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
                //TODO
                print_list(llist);
                break;
            default:
                printf("Action not availble\n");
        }

    } while (ans != 0);

    return 0;
}
