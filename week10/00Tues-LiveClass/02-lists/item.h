#pragma once
#include <stdbool.h>

// the simplest item ever - interface.
// useful for linked lists.
// prog71985 - f22 - week 10 - classroom effort

typedef struct item
{
    int data;
} ITEM;

ITEM CreateItem(int);
void DestroyItem(ITEM);

void SetItemData(ITEM, int);
int GetItemData(ITEM);

bool CompareItems(ITEM, ITEM);
 
void PrintItem(ITEM);
