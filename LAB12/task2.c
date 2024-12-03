#include <stdio.h>
#include <stdlib.h>

void swapped (int* aPtr, int* bPtr, int* cPtr)
{
    int tmp;

    tmp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *aPtr = tmp; //this seems stupid, u just replaced 'a' with 'c' why would u... ¯\_(ツ)_/¯ question says so ig

}

int main ()
{
    int a[3];

    //take input
    for (int i = 0; i < 3; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    //before swap
    for (int i = 0; i < 3; i++)
    printf("%d ", a[i]);
    printf("\n");

    //swap
    swapped(&a[0], &a[1], &a[2]);

    //after swap
    for (int i = 0; i < 3; i++)
    printf("%d ", a[i]);
    printf("\n");
}