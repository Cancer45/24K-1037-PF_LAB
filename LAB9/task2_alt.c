#include <stdio.h>

void swap (int[2]);

int main ()
{
    int n[2];
    
    //input
    for (int i = 0; i < 2; i++)
    {
        printf("input integer %d: ", i + 1);
        scanf("%d", &n[i]);
        printf("integer %d is %d\n", i + 1, n[i]);
    }

    //swap
    swap(n);

    //after swap
    printf("\nSWAPPED!\n");
    for (int i = 0; i < 2; i++)
    {
        printf("integer %d is %d\n", i + 1, n[i]);
    }
}

void swap (int n[2])
{
    int tmp = n[0];
    n[0] = n[1];
    n[1] = tmp;
}