#include <stdio.h>

void hist (int input[]);

int main() {
    
    //take input
    int input[10];
    for (int i = 0; i < 10; i++)
    {
        printf("input number %d: ", i + 1);
        scanf("%d", &input[i]);
    }
    
    hist(input);
    
    return 0;
}

void hist (int input[])
{
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
    int large = input[0];
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
}
