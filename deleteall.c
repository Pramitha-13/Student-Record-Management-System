#include "header.h"

void deleteall(SLL **ptr)
{
    SLL *del = *ptr;
    int c = 1;

    printf("\n*************\n");

    if(*ptr == NULL)
    {
        printf("No records\n");
        return;
    }

    while(del)
    {
        *ptr = del->next;

        printf("Node position: %d deleted\n", c++);

        free(del);
        del = *ptr;
    }

    printf("All records deleted\n");
}
