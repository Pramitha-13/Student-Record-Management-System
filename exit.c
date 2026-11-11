#include "header.h"

void exitprogram(SLL **ptr)
{
    char ch;

    printf("S/s : Save and Exit\n");
    printf("E/e : Exit without saving\n");

    printf("Enter choice:\n");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'S':
        case 's':

            savefile(*ptr);
            deleteall(ptr);
            exit(0);

        case 'E':
        case 'e':

            deleteall(ptr);
            exit(0);

        default:

            printf("Invalid choice\n");
    }
}
