/* Module 1: ArrayList */
#include <stdio.h>
#include <stdlib.h>
#include "mod1.h"

#define INIT_CAP 9

int size;

void init(struct array_list* arrlst) {
    arrlst->arr = calloc(INIT_CAP, sizeof(int));
}

void print_arr(struct array_list* arrlst) {
    printf(">>> Current array:\n");
    for (int i = 0; i < INIT_CAP; i++) {
        printf("%d ", arrlst->arr[i]);
    }
}
