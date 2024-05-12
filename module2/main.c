/* Module 2: SinglyLinkedList */
#include <stdio.h>
#include <stdlib.h>
#include "mod2.h"

char ACTIONS[] =
    "0\tQuit\n"
    "1\tPrint array\n"
    "2\tAdd to front\n"
    "3\tAdd to back\n"
    "4\tRemove from front\n"
    "5\tRemove from back\n";

int main() {
    printf("*** Module 1: SinglyLinkedList (integers only) ***\n");

    // Initialize singly-linked list
    struct singly_linked_list* sll = malloc(sizeof(struct singly_linked_list));

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
                print_list(sll);
                break;
            case 2:
                add_to_front(sll);
                break;
            case 3:
                add_to_back(sll);
                break;
            case 4:
                remove_from_front(sll);
                break;
            case 5:
                remove_from_back(sll);
                break;
            default:
                printf("Action not availble\n");
        }

    } while (ans != 0);

    free(sll);

    return 0;
}
