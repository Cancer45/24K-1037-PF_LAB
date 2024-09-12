#include <stdio.h>

int main() {
    int a;
    printf("Input an integer Number: ");
    scanf("%d", &a);
    
    if (a > 0)
    {
        if (a % 2 == 0)
        {
            if (a % 10 == 0)
            {
                printf("accepted");
            }
            else
            {
                printf("number must be divisible by 10");
            }
        }
        else
        {
            printf("number must be a multiple of 2");
        }
    }
    else
    {
        printf("number must be positve");
    }
    return 0;
}