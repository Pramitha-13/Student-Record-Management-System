#include "header.h"

void addbegin(SLL **ptr)
{
    SLL *new, *temp;
    int roll = 1, found;

    new = malloc(sizeof(SLL));

    if(new == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    /* Find smallest unused roll number */

    while(1)
    {
        found = 0;
        temp = *ptr;

        while(temp)
        {
            if(temp->rollno == roll)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if(found == 0)
            break;

        roll++;
    }

    new->rollno = roll;

    printf("Enter name and percentage:\n");
    scanf("%49s %f", new->name, &new->mark);

    new->next = *ptr;
    *ptr = new;

    printf("Record added successfully\n");
    printf("Assigned Roll Number: %d\n", roll);
}
