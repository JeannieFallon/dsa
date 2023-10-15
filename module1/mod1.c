/* Module 1: ArrayList */
#include <stdio.h>
#include <stdlib.h>
#include "mod1.h"

#define INIT_CAP 9

void init(struct array_list* arrlst) {
    arrlst->cap = INIT_CAP;
    arrlst->size = 0;
    arrlst->arr = calloc(INIT_CAP, sizeof(int));
}

void print_arr(struct array_list* arrlst) {
    printf("\n>>> Current array: ");
    for (int i = 0; i < arrlst->size; i++) {
        printf("%d ", arrlst->arr[i]);
    }
    printf("\n");
}

void add_to_front(struct array_list* arrlst) {
    int num;

    printf("\nEnter number to add to front of array:\n");
    scanf("%d", &num);

    // Resize backing array if hit capacity
    if (arrlst->size+1 > arrlst->cap) {
        int new_cap = arrlst->cap * 2;
        arrlst->arr = realloc(arrlst->arr, new_cap * sizeof(int));
    }

    // Iterate in reverse through backingArray, shifting vals
    for (int i=arrlst->size; i > 0; i--) {
        arrlst->arr[i] = arrlst->arr[i-1];
    }

    // Add new value to front
    arrlst->arr[0] = num;

    // Increment size
    arrlst->size++;

    print_arr(arrlst);
}

void add_to_back(struct array_list* arrlst) {
    int num;

    printf("\nEnter number to add to back of array:\n");
    scanf("%d", &num);

    // Resize backing arary if hit capacity
    if (arrlst->size+1 > arrlst->cap) {
        int new_cap = arrlst->cap * 2;
        arrlst->arr = realloc(arrlst->arr, new_cap * sizeof(int));
    }

    // Add new value to back
    arrlst->arr[arrlst->size] = num;

    // Increment size
    arrlst->size++;

    print_arr(arrlst);
}

void remove_from_front(struct array_list* arrlst) {
    if (arrlst-> size < 1) {
        printf("\n!!! No items in array to remove !!!\n");
        return;
    }

    int num = arrlst->arr[0];

    printf("\nRemoving %d from front of array\n", num);

    // Iterate through backingArray, shifting vals forward one index
    for (int i=0; i < arrlst->size-1; i++) {
        arrlst->arr[i] = arrlst->arr[i+1];
    }

    // FIXME Set value at back index to null
    arrlst->arr[arrlst->size-1] = 0;
    //arrlst->arr[back_idx] = NULL;
    //memset(arrlst->arr[back_idx], NULL, sizeof(int));

    // Decrement size
    arrlst->size--;

    print_arr(arrlst);
}

void remove_from_back(struct array_list* arrlst) {
    if (arrlst-> size < 1) {
        printf("\n!!! No items in array to remove !!!\n");
        return;
    }

    int back_idx = arrlst->size - 1;
    int num = arrlst->arr[back_idx];

    printf("\nRemoving %d from back of array\n", num);

    // FIXME Set value at back index to null
    arrlst->arr[back_idx] = 0;
    //arrlst->arr[back_idx] = NULL;
    //memset(arrlst->arr[back_idx], NULL, sizeof(int));

    // Decrement size
    arrlst->size--;

    print_arr(arrlst);
}
