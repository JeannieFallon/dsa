/* Module 2: SinglyLinkedList */
#ifndef MOD2_H
#define MOD2_H

struct singly_linked_list {
    int size;                   // Length of current list
    struct sll_node* head;      // Pointer to first node in list
    struct sll_node* tail;      // Pointer to last node in list
};

struct sll_node {
    int value;                  // Stored value
    struct sll_node* next;      // Pointer to next node in list
};

void init(struct singly_linked_list* sll);
void print_sll(struct singly_linked_list* sll);
void add_to_front(struct singly_linked_list* sll);
void add_to_back(struct singly_linked_list* sll);
void remove_from_front(struct singly_linked_list* sll);
void remove_from_back(struct singly_linked_list* sll);

#endif /* MOD2_H */
