#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

int main(int argc, char *argv[]) {
    struct Node *linkedList = NULL;

    int num1 = 1;
    double num2 = 2.0;
    long num3 = 4.0;
    int num4 = 3;
    char s[4] = "test";

    push(&linkedList, &num1, sizeof(int));
    push(&linkedList, &num2, sizeof(double));
    push(&linkedList, &num3, sizeof(long));
    push(&linkedList, &num4, sizeof(int));
    push(&linkedList, s, strlen(s) * sizeof(char));

    printf("%d\n", *(int *)linkedList->data);
    linkedList = linkedList->next;
    printf("%f\n", *(double *)linkedList->data);
    linkedList = linkedList->next;
    printf("%ld\n", *(long *)linkedList->data);
    linkedList = linkedList->next;
    printf("%d\n", *(int *)linkedList->data);
    linkedList = linkedList->next;
    printf("%s\n", (char *)linkedList->data);

    return 0;
}