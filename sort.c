#include "header.h"

void sortdata(SLL *ptr)
{
    SLL *p1, *p2;
    SLL t;

    int i, j, c;
    char ch;

    if(ptr == NULL)
    {
        printf("No records\n");
        return;
    }

    c = countnode(ptr);

    printf("N/n : Sort with name\n");
    printf("P/p : Sort with percentage\n");

    scanf(" %c", &ch);

    if(ch != 'N' && ch != 'n' &&
       ch != 'P' && ch != 'p')
    {
        printf("Invalid choice\n");
        return;
    }

    for(i = 0; i < c - 1; i++)
    {
        p1 = ptr;

        for(j = 0; j < c - 1 - i; j++)
        {
            p2 = p1->next;

            if(((ch == 'N' || ch == 'n') &&
                strcmp(p1->name, p2->name) > 0) ||

               ((ch == 'P' || ch == 'p') &&
                p1->mark < p2->mark))
            {
                t = *p1;

                p1->rollno = p2->rollno;
                strcpy(p1->name, p2->name);
                p1->mark = p2->mark;

                p2->rollno = t.rollno;
                strcpy(p2->name, t.name);
                p2->mark = t.mark;
            }

            p1 = p1->next;
        }
    }

    printf("Sorting completed\n");
}
