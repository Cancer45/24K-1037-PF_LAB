#include <stdio.h>

int main() {
    
    int input[10], large;
    for (int i = 0; i < 10; i++)
    {
        printf("input number %d: ", i + 1);
        scanf("%d", &input[i]);
    }
    
    //print horizontal
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < input[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    //largest value?
    large = input[0];
    for (int i = 0; i < 10; i++)
    {
        if (input[i] > large)
        {
            large = input[i];
        }
    }
    printf("\n");
    //print vertical
    for (int i = large; i > 0; i--)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i <= input[j])
            {
                printf("*");
            }
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}