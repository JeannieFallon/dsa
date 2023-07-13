/* Module 1: ArrayList */
#include <stdio.h>
#include <stdlib.h>
#include "mod1.h"

#define INIT_CAP 9

int size;
struct array_list* arrlst;

void init() {
    //FIXME
    printf("DEBUG: init arrlst\n");
    arrlst->arr = calloc(INIT_CAP, sizeof(int));
}

int print_arr() {
    printf(">>> Current array:\n");
    for (int i = 0; i < INIT_CAP; i++) {
        printf("%d ", arrlst->arr[i]);
    }

    return 0;
}
