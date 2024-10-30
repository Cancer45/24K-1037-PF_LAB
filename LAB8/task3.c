#include <stdio.h>

int main ()
{   int matrix [3][3], ye = 0;

    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("row %d, element %d: ", i, j);
            scanf("%d", &matrix [i][j]);
        }
    }
    int la_col [3] = {0}, sm_row [3] = {100};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix [j][i] > la_col[i])
            {
                la_col[i] = matrix[j][i];
            }

            if (matrix [i][j] < sm_row[i])
            {
                sm_row[i] = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sm_row [i] == la_col [j])
            {
                printf("saddle point: %d\n", sm_row [i]);
                ye = 1;
            }
        }
    }

    if (ye != 1)
    {
        printf("no saddle points :(");
    }
}