#include "header.h"

void modify(SLL *ptr)
{
    SLL *p, *temp = NULL;

    int roll, count = 0;
    char ch, name[50];
    float mark;

    if(ptr == NULL)
    {
        printf("No records available\n");
        return;
    }

    printf("R/r : Search by roll number\n");
    printf("N/n : Search by name\n");
    printf("P/p : Search by percentage\n");

    scanf(" %c", &ch);

    switch(ch)
    {
        case 'R':
        case 'r':

            printf("Enter roll number:\n");
            scanf("%d", &roll);

            for(p = ptr; p != NULL; p = p->next)
            {
                if(p->rollno == roll)
                {
                    temp = p;
                    break;
                }
            }

            break;

        case 'N':
        case 'n':

            printf("Enter name:\n");
            scanf("%49s", name);

            for(p = ptr; p != NULL; p = p->next)
            {
                if(strcmp(p->name, name) == 0)
                {
                    count++;
                    temp = p;
                }
            }

            if(count > 1)
            {
                printf("Matching records:\n");

                for(p = ptr; p != NULL; p = p->next)
                {
                    if(strcmp(p->name, name) == 0)
                    {
                        printf("%d %s %.2f\n",
                               p->rollno, p->name, p->mark);
                    }
                }

                printf("Enter roll number to modify:\n");
                scanf("%d", &roll);

                temp = NULL;

                for(p = ptr; p != NULL; p = p->next)
                {
                    if(p->rollno == roll &&
                       strcmp(p->name, name) == 0)
                    {
                        temp = p;
                        break;
                    }
                }
            }

            break;

        case 'P':
        case 'p':

            printf("Enter percentage:\n");
            scanf("%f", &mark);

            for(p = ptr; p != NULL; p = p->next)
            {
                if(p->mark == mark)
                {
                    count++;
                    temp = p;
                }
            }

            if(count > 1)
            {
                printf("Matching records:\n");

                for(p = ptr; p != NULL; p = p->next)
                {
                    if(p->mark == mark)
                    {
                        printf("%d %s %.2f\n",
                               p->rollno, p->name, p->mark);
                    }
                }

                printf("Enter roll number to modify:\n");
                scanf("%d", &roll);

                temp = NULL;

                for(p = ptr; p != NULL; p = p->next)
                {
                    if(p->rollno == roll && p->mark == mark)
                    {
                        temp = p;
                        break;
                    }
                }
            }

            break;

        default:
            printf("Invalid choice\n");
            return;
    }

    if(temp == NULL)
    {
        printf("Record not found\n");
        return;
    }

    printf("Current record:\n");
    printf("%d %s %.2f\n",
           temp->rollno, temp->name, temp->mark);

    printf("Enter updated name and percentage:\n");
    scanf("%49s %f", temp->name, &temp->mark);

    printf("Record modified successfully\n");
}
