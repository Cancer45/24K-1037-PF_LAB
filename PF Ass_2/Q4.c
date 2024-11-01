#include <stdio.h>
#include<string.h>

char* sort(char to_sort[100], int m);
void fill(char to_fill[][100], int n);
char (*check(char to_check[][100]))[100];
void print(char to_print[][100]);
int count = 0, n;
char result[10][100], checked [20][100];


int main ()
{
    char arr [10][100];
    do
    {   printf("number of transactions: ");
        scanf("%d", &n);
    } while (n > 10);
    
    fill(arr, n);
    print(check(arr));
}

void fill (char to_fill[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("transaction number %d: ", i + 1);
        scanf("%s", to_fill[i]);
    }
}

char* sort (char to_sort[100], int m)
{
    char tmp;
    strcpy(result[m], to_sort);
    for (int i = 0; to_sort[i] != '\0'; i++)
    {
        for (int j = 0; to_sort[j] != '\0'; j++)
        {
            if (result[m][j] > result[m][i])
            {
                tmp = result[m][i];
                result[m][i] = result[m][j];
                result[m][j] = tmp;
            }
        }
    }
    return result[m];
}


char (*check(char to_check[][100]))[100]
{
    int done;
    for (int i = count; i < n; i++)
    {
        done = 0;
        for (int k = 0; k < count; k++)
            {
                if ((strcmp(checked[k], to_check[i]) == 0))
                {
                    done = 1;
                    break;
                }
            }

        if (done == 1)
        {   
            continue;
        }

        strcpy(checked[count], to_check[i]);
        count++;

        for (int j = i + 1; j < n; j++)
        {  
            if (strcmp(sort(to_check[i], i), sort(to_check[j], j)) == 0)
            {   
                strcpy(checked[count], to_check[j]);
                count++;
            }
        }

        strcpy(checked[count], "0");
        count++;
    }
    return checked;
}

void print(char to_print[][100])
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(to_print[i], "0") == 0)
        {
            printf("\n");
        }

        else
        {
            printf("%s ", to_print[i]);
        }
    }
}
