#ifndef MOD2_H
#define MOD2_H

struct node {
    int val;
    struct node *next;
};

struct linked_list {
    struct node *head;
    struct node *tail;
};

void print_list(struct linked_list* llist);

#endif /* MOD1_H */
