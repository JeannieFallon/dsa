/* Module 2: SinglyLinkedList */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod2.h"


void print_sll(struct singly_linked_list* sll) {
    printf("\n>>> Current list:\n");

    struct sll_node* curr = malloc(sizeof(struct sll_node));
    curr = sll->head;

    while (NULL != curr) {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("\n");

    // Free curr here because not used again
    free(curr);
}

void add_to_front(struct singly_linked_list* sll) {
    int val;

    printf("\nEnter number to add to FRONT of array:\n");
    scanf("%d", &val);

    // Create new node
    struct sll_node* new_node = malloc(sizeof(struct sll_node));
    new_node->value = val;

    if (sll->size > 0) {
        // Set NEXT on new node to point to previous HEAD
        new_node->next = sll->head;
    } else {
        // If list is empty, need to set new node as TAIL also
        sll->tail = new_node;
    }

    // Re-assign HEAD to new node and increment list size
    sll->head = new_node;
    sll->size++;

    print_sll(sll);
}

void add_to_back(struct singly_linked_list* sll) {
    int val;

    printf("\nEnter number to add to BACK of array:\n");
    scanf("%d", &val);

    // Create new node
    struct sll_node* new_node = malloc(sizeof(struct sll_node));
    new_node->value = val;

    if (sll->size > 0) {
        // Set NEXT on previous TAIL to new node
        sll->tail->next = new_node;
    } else {
        // If list is empty, need to set new node as HEAD also
        sll->head = new_node;
    }

    // Re-assign TAIL to new node and increment list size
    sll->tail = new_node;
    sll->size++;

    print_sll(sll);
}

void remove_from_front(struct singly_linked_list* sll) {
    printf("\nTODO\n");
}

void remove_from_back(struct singly_linked_list* sll) {
    printf("\nTODO\n");
}
