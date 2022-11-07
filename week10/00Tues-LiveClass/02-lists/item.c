#include "item.h"
#include <stdio.h>

// the simplest item ever - implementation.
// useful for linked lists.
// prog71985 - f22 - week 10 - classroom effort

ITEM CreateItem(int i)
{
    ITEM I;
    I.data = i;
    return I;
}

void DestroyItem(ITEM I)
{
    //nothing
}

void SetItemData(ITEM I, int i)
{
    I.data = i;    
}

int GetItemData(ITEM I)
{
    return I.data;
}

bool CompareItems(ITEM I, ITEM J)
{
    //printf("first:%d, second:%d\n", I.data, J.data);
    if(I.data == J.data)
        return true;
    else
        return false;
}

void PrintItem(ITEM I)
{
    printf("ITEM-PRINTER: data: %d\n", I.data);
}
