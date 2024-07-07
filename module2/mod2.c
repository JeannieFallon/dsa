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
    int val;

    if (sll->size == 0) {
        printf("!!! Cannot remove item from list size %d !!!\n", sll->size);
        goto exit;
    }

    val = sll->head->value;

    // Create another pointer so that HEAD memory can be freed after re-assignment
    struct sll_node* curr = malloc(sizeof(struct sll_node));
    curr = sll->head;

    // Re-assign HEAD to previous HEAD's NEXT and decrement list size
    sll->head = sll->head->next;
    sll->size--;

    // Must free nodes because allocated on the heap
    free(curr);
    curr = NULL;

    // For list size 1, HEAD and TAIL are same node
    if (sll->size == 1) {
        // Must free nodes because allocated on the heap
        free(sll->tail);
        sll->tail = NULL;
    }

    printf("Removed value from FRONT of list: %d\n", val);

exit:
    print_sll(sll);
}

void remove_from_back(struct singly_linked_list* sll) {
    printf("\nTODO\n");

exit:
    print_sll(sll);
}
