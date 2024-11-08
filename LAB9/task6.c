#include <stdio.h>

int minmax (int*, int);
int n;

int main ()
{
    int arr[100] = {0};
    printf("number of integers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("minimum value: %d\nmaximum value: %d\n", minmax(arr, 0), minmax(arr, 1));
}

int minmax (int* arr, int m)
{
    switch (m)
    {
        case 0:
        int min = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min)
            min = arr[i];
        }

        return min;

        case 1:
        int max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
            max = arr[i];
        }

        return max;
    }
}