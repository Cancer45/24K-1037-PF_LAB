#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int size, largest, i;
    int* array;
    printf("size of array: ");
    scanf("%d", &size);

    array = (int*)malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", array + i);
    }
    
    i = size;
    do
    {   printf("new size of array: ");
        scanf("%d", &size);
    } while (size < i); //new size must be greater

    array = (int*)realloc(array, size * sizeof(int));

    //get additional numbers
    for ( ; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", array + i);
    }

    //find greatest
    largest = *array;
    for (i = 1; i < size; i++)
    {
        if (*(array + i) > largest)
        largest = *(array + i);
    }

    //print largest
    printf("Largest: %d\n", largest);
}