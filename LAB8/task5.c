#include <stdio.h>

int add (int);

int main() {
    int row = 7;
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i <= 4)
            {
                if (j <= (4 - i))
                {
                    printf(" ");
                }
                
                else
                {
                    printf("* ");
                }
            }
            
            else
            {
                if (j <= (i - 4))
                {
                    printf(" ");
                }
                
                else
                {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
    

    return 0;
}
