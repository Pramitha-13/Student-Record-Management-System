#include "header.h"

void savefile(SLL *ptr)
{
    FILE *fp;

    printf("\n*************\n");

    if(ptr == NULL)
    {
        printf("No records\n");
        return;
    }

    fp = fopen("student.data", "w");

    if(fp == NULL)
    {
        printf("File opening failed\n");
        return;
    }

    while(ptr)
    {
        fprintf(fp, "%d %s %f\n",
                ptr->rollno,
                ptr->name,
                ptr->mark);

        ptr = ptr->next;
    }

    fclose(fp);

    printf("Data saved in file successfully\n");
    printf("*************\n");
}
