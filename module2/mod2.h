/* Module 2: SinglyLinkedList */
#ifndef MOD2_H
#define MOD2_H

struct singly_linked_list {
    int cap;    // Capacity of backing array
    int size;   // Length of current values
    int* arr;   // Backing array
};

void init(struct singly_linked_list* sllst);
void print_list(struct singly_linked_list* sllst);
void add_to_front(struct singly_linked_list* sllst);
void add_to_back(struct singly_linked_list* sllst);
void remove_from_front(struct singly_linked_list* sllst);
void remove_from_back(struct singly_linked_list* sllst);

#endif /* MOD2_H */
