#include "header.h"

int countnode(SLL *ptr)
{
    int c = 0;

    while(ptr)
    {
        c++;
        ptr = ptr->next;
    }

    return c;
}
