#include <stdio.h>

void main ()
{
    // variable declaration
    int n = 5, data[] = {1, 2, 3, 4, 5};
    int lower = 0, middle, upper = n - 1;
    int item, found = 0;

    // input a item to search
    printf("\tEnter the item: ");
    scanf("%d",&item);

    while(lower <= upper)
    {
        // find the middle position of data list
        middle = (lower + upper) / 2;

        // Check if item is match in middle position
        if(item == data[middle]){
            found = 1;
            break;
        }
        // Check if item is less than from middle position
        else if(item < data[middle])
            upper = middle - 1;

        // Check if item is greater than from middle position
        else
            lower = middle + 1;
    }

    // check found true or false and print a message
    if(found == 1)
        printf("\n\tItem found in %d location.\n\n",middle);
    else
        printf("\n\tItem not found.\n\n");
}
