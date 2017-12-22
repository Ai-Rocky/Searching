#include <stdio.h>

void main ()
{
    // variable declaration
    int n = 5, data[] = {5, 1, 4, 2, 3};
    int item, i, found = 0;

    // input a item to search
    printf("\tEnter the item: ");
    scanf("%d",&item);

    // Traversing data list
    for(i=0; i<n; i++)
    {
        // Check if item is match in data list
        if(item == data[i])
        {
            found = 1;
            break;
        }
    }

    // check found true or false and print a message
    if(found == 1)
        printf("\n\tItem found in %d location.\n\n",i);
    else
        printf("\n\tItem not found.\n\n");
}
