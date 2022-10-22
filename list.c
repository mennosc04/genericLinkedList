#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void push(struct Node **list, void *value, size_t dataSize) {
    struct Node *nextNode = malloc(sizeof(struct Node));
    struct Node *reference = *list;

    nextNode->data = malloc(dataSize);
    nextNode->next = NULL;

    //copy new value to nextNode->value
    for (int i=0; i<dataSize; i++) {
        *(char *)(nextNode->data + i) = *(char *)(value + i);
    }

    if(*list == NULL) {
        *list = nextNode;
        return;
    }

    while(reference->next != NULL) {
        reference = reference->next;
    }

    reference->next = nextNode;
}