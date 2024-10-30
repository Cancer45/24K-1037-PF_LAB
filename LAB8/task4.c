#include <stdio.h>

int main ()
{   int matrix1 [3][3], matrix2 [3][3], mat_prod [3][3] = {0}, mat_dif [3][3];

    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("row %d, element %d: ", i, j);
            scanf("%d", &matrix1 [i][j]);
        }
    }

    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                mat_prod[i][j] += matrix1[i][j + k] * matrix2[j][i];
            }
        }
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