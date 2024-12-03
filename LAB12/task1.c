#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int size, sum = 0;
    int* array;
    printf("size of array: ");
    scanf("%d", &size);

    array = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", array + i);
    }
    
    for (int i = 0; i < size; i++)
    sum += *(array + i);

    printf("sum: %d\n", sum);
}