#include "header.h"

void reverseprint(SLL *ptr)
{
    SLL *t;
    int i, j;
    int c = countnode(ptr);

    printf("\n*************\n");

    if(ptr == NULL)
    {
        printf("No records\n");
        return;
    }

    for(i = 0; i < c; i++)
    {
        t = ptr;

        for(j = 0; j < c - 1 - i; j++)
            t = t->next;

        printf("%d %s %.2f\n",
                t->rollno,
                t->name,
                t->mark);
    }

    printf("*************\n");
}
