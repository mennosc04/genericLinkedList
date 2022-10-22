#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
    void *data;
    struct Node *next;
};

void push(struct Node **list, void *value, size_t dataSize);

#endif