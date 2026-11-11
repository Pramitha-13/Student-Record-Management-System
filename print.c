#include "header.h"

void printnode(SLL *ptr)
{
    printf("\n*************\n");

    if(ptr == NULL)
    {
        printf("No records\n");
        return;
    }

    while(ptr)
    {
        printf("%d %s %.2f\n",
                ptr->rollno,
                ptr->name,
                ptr->mark);

        ptr = ptr->next;
    }

    printf("*************\n");
}
