#include <stdio.h>

int main ()
{   int input;
    printf("input limit for prime sequence: ");
    scanf("%d", &input);

    for (int i = 2; i < input; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if ((i % j) == 0)
            {   
                break;
            }

            if (j == i - 1)
            {
                printf("%d\n", i);
            }
        }
    }
}