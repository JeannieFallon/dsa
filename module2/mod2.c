/* Module 2: SinglyLinkedList */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod2.h"

#define INIT_CAP 9

void init(struct singly_linked_list* sllst) {
    sllst->cap = INIT_CAP;
    sllst->size = 0;
    sllst->arr = calloc(INIT_CAP, sizeof(int));
}

void print_list(struct singly_linked_list* sllst) {
    printf("\n>>> Current list: ");
    printf("\nTODO\n");
}

void add_to_front(struct singly_linked_list* sllst) {
    printf("\nTODO\n");
}

void add_to_back(struct singly_linked_list* sllst) {
    printf("\nTODO\n");
}

void remove_from_front(struct singly_linked_list* sllst) {
    printf("\nTODO\n");
}

void remove_from_back(struct singly_linked_list* sllst) {
    printf("\nTODO\n");
}

