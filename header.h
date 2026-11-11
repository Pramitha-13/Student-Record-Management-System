#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct student
{
    int rollno;
    char name[50];
    float mark;
    struct student *next;
} SLL;

/* Function declarations */

void addbegin(SLL **ptr);

void printnode(SLL *ptr);

int countnode(SLL *ptr);

void savefile(SLL *ptr);

void reverseprint(SLL *ptr);

void deleteall(SLL **ptr);

void deletenode(SLL **ptr);

void sortdata(SLL *ptr);

void modify(SLL *ptr);

void exitprogram(SLL **ptr);

#endif
