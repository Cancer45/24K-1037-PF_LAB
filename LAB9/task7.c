#include <stdio.h>
#include <string.h>
void sortarr (char words[][100]); 
int n;

int main ()
{
    char words[100][100];
    
    printf("number of words: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    sortarr(words);

    for (int i = 0; i < n; i++)
    {
        printf("%s ", words[i]);
    }
    printf("\n");
}

void sortarr (char words[][100])
{
    char tmp[100];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (words[j][0] < words[i][0])
            {
                strcpy(tmp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], tmp);
            }

        }
    }
}