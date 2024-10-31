#include <stdio.h>

int add (int);

int main() 
{   int arr [5][9] = {0};
    arr[0][4] = 1;
        
    //fill
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int lim1 = 4 - i, lim2 = 4 + i;
            
            if (j == lim1 || j == lim2)
            {
               arr [i][j] = 1;
            }
            
            else if (j > lim1 && j < lim2)
            {
                if (j % 2 == 0)
                {
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1]; 
                }
            }
        }
    }
    
    //print
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] == 0)
            {
               printf(" ");
            }
            
            else
            {
                printf("%d", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
