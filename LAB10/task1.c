#include <stdio.h>

void print_arr (int*, int);
int main ()
{
    int arr[5] = {1, 3, 6, 7, 10};
    print_arr(arr, 5);
}

void print_arr (int* arr, int size)
{
    if (size == 1)
    {
        printf("%d\n", arr[0]);
    }

    else
    {
        printf("%d\n", arr[size - 1]);
        print_arr(arr, size - 1);
    }
}