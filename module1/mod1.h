/* Module 1: ArrayList */
#ifndef MOD1_H
#define MOD1_H

struct array_list {
    int cap;    // Capacity of backing array
    int size;   // Length of current values
    int* arr;   // Backing array
};

void init(struct array_list* arrlst);
void print_arr(struct array_list* arrlst);
void add_to_front(struct array_list* arrlst);

#endif /* MOD1_H */
