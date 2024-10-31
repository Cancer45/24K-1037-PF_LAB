#include <stdio.h>

int main ()
{   int matrix1 [3][3], matrix2 [3][3], mat_prod [3][3], mat_dif [3][3];

    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matrix 1 row %d, element %d: ", i + 1, j + 1);
            scanf("%d", &matrix1 [i][j]);
        }
    }
    
    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matrix 2 row %d, element %d: ", i + 1, j + 1);
            scanf("%d", &matrix2 [i][j]);
        }
    }

    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {mat_prod[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mat_prod[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d\t", mat_prod[i][j]);
        }
        printf("\n");
    }

   for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           mat_dif [i][j] = matrix1[i][j] - mat_prod[i][j];
           printf("%d\t", mat_dif[i][j]);
        }
        printf("\n");
    }
    
}
