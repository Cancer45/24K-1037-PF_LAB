#include <stdio.h>

int linear_search (int input[], int target, int size);

int main ()
{
    int size, tar;
    printf("size of array: ");
    scanf("%d", &size);
    int num[size];

    //fill array
    for (int i = 0; i < size; i++)
    {
        printf("number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    //input target
    printf("Target: ");
    scanf("%d", &tar);

    //search
    if (linear_search(num, tar, size))
    {
        printf("FOUND\n");
    }

    else
    {
        printf("NOT FOUND\n");
    }
}

int linear_search (int input[], int target, int size)
{
    if (input[size - 1] == target)
    {
        return 1;
    }

    else
    {
        if (size == 1)
        {
            return 0;
        }

        else
        {
            return linear_search (input, target, size - 1);
        }
    }
}