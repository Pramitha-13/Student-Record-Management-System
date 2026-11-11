#include "header.h"

void deletenode(SLL **ptr)
{
    SLL *del = *ptr, *prev = NULL;
    int num;

    printf("\n*************\n");

    if(*ptr == NULL)
    {
        printf("No records\n");
        return;
    }

    printf("Enter roll number to delete:\n");
    scanf("%d", &num);

    while(del)
    {
        if(num == del->rollno)
        {
            if(*ptr == del)
                *ptr = del->next;
            else
                prev->next = del->next;

            free(del);

            printf("Record deleted successfully\n");
            return;
        }

        prev = del;
        del = del->next;
    }

    printf("Roll number not found\n");
}
