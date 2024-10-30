#include <stdio.h>

int main ()
{   
    int arr [2][7][2], input, odd, even;
    printf("input starting number: ");
    scanf("%d", &input);

    if (input % 2 == 0)
    {
        odd = input - 1;
        even = input;
    }

    else
    {
        odd = input;
        even = input - 1;
    }

    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (k == 1)
                {
                    arr [k][i][j] = even;
                    even -= 2;
                }

                else
                {
                   arr [k][i][j] = odd;
                   odd -= 2; 
                }
                
            }
        }
    }

    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("\t%d", arr[k][i][j]); 
            }
            printf("\n");
            if (k == 1)
            {
                printf("\t\t");
            }
        }
    }
}