/* Module 2: SinglyLinkedList */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod2.h"

void init(struct singly_linked_list* sll) {
    // FIXME are these necessary? how to auto initialize to 0 and NULL with malloc?
    sll->size = 0;
    sll->head = NULL;
    sll->tail = NULL;
}

void print_sll(struct singly_linked_list* sll) {
    printf("\n>>> Current list:\n");

    struct sll_node* curr = malloc(sizeof(struct sll_node));
    curr = sll->head;


    while (NULL != curr && NULL != curr->next) {
        printf("\n%d\n", &curr->next);
        curr = curr->next;
    }
    printf("\n");
}

void add_to_front(struct singly_linked_list* sll) {
    int val;

    printf("\nEnter number to add to front of array:\n");
    scanf("%d", &val);

    // Create new node
    struct sll_node* new_node = malloc(sizeof(struct sll_node));

    // If HEAD exists, set as NEXT on new node
    if (NULL != sll->head) {
        new_node->next = sll->head;
    } else {
        new_node->next = NULL;
    }

    // Re-assign HEAD to new node
    sll->head = new_node;

    print_sll(sll);
}

void add_to_back(struct singly_linked_list* sll) {
    printf("\nTODO\n");
}

void remove_from_front(struct singly_linked_list* sll) {
    printf("\nTODO\n");
}

void remove_from_back(struct singly_linked_list* sll) {
    printf("\nTODO\n");
}
