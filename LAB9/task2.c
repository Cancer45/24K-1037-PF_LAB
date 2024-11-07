#include <stdio.h>

void swap (int*, int*);

int main ()
{
    int n1, n2;
    
    //input
    printf("input integer 1: ");
    scanf("%d", &n1);
    printf("integer 1 is %d\n", n1);

    printf("input integer 2: ");
    scanf("%d", &n2);
    printf("integer 2 is %d\n", n2);
    

    //swap
    swap(&n1, &n2);
    printf("SWAPPED!\n");
    printf("integer 1 is %d\n", n1);
    printf("integer 2 is %d\n", n2);

}

void swap (int* n1, int* n2)
{   
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}