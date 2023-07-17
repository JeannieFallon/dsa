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
    printf(">>> Current array:");
    for (int i = 0; i < arrlst->size; i++) {
        printf("%d ", arrlst->arr[i]);
    }
    printf("\n");
}

void add_to_front(struct array_list* arrlst) {
    int num;

    printf(">>> Enter number to add to front of array:\n");
    scanf("%d", &num);

    // Check if need to resize
    // Possibly pull this out to shared method

    // Iterate in reverse through backingArray, shifting vals

    // Increment size
}
