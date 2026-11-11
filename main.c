#include "header.h"

int main()
{
    SLL *headptr = NULL;
    int op, c;

    while(1)
    {
        printf("\033[32m");
        printf("\n1) Addbegin");
        printf("\n2) Printnode");
        printf("\n3) Countnode");
        printf("\n4) Savefile");
        printf("\n5) Reverseprint");
        printf("\n6) Deleteall");
        printf("\n7) Deletenode");
        printf("\n8) Sortdata");
        printf("\n9) Modify");
        printf("\n10) Exit\n");
        printf("\033[0m");

        printf("Enter choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                addbegin(&headptr);
                break;

            case 2:
                printnode(headptr);
                break;

            case 3:
                c = countnode(headptr);
                printf("Total count = %d\n", c);
                break;

            case 4:
                savefile(headptr);
                break;

            case 5:
                reverseprint(headptr);
                break;

            case 6:
                deleteall(&headptr);
                break;

            case 7:
                deletenode(&headptr);
                break;

            case 8:
                sortdata(headptr);
                break;

            case 9:
                modify(headptr);
                break;

            case 10:
                exitprogram(&headptr);
                break;

            default:
                printf("Unknown choice\n");
        }
    }
}
