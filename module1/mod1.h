/* Module 1: ArrayList */
#ifndef MOD1_H
#define MOD1_H

struct array_list {
    int size;
    int* arr;
};

void init(struct array_list* arrlst);
void print_arr(struct array_list* arrlst);

#endif /* MOD1_H */
