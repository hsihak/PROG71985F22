#include "item.h"
#include <stdio.h>

// simplest use of simplest item
// week 10 - prog71985f22 - prof steveh

int main(void)
{
    ITEM i = CreateItem(5);

    PrintItem(i);
    printf("inside item: %d\n", GetItemData(i));

    DestroyItem(i);

    return 0;
}
