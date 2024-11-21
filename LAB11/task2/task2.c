#include <stdio.h>

int main ()
{
    int i = 0;
    FILE* fptr1 = fopen("count_words.txt", "r");

    if (fptr1 == NULL)
    {
        return 1;
    }

   //do this with fgetc()

    printf("%d words in file", i);

    fclose(fptr1);
}