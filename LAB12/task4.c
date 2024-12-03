#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int charCount;
    char* name, tmp;
    printf("Number of Characters in your name [first + last]: ");
    scanf("%d", &charCount);
    getchar(); //clear input buffer
    charCount += 2; //2 additional, one for space, one for '\0'

    name = (char*)malloc(charCount * sizeof(char));


    printf("Name: ");
    for (int i = 0; i < charCount; i++)
    {
        tmp = getchar();
        
        if (tmp)
        name[i] = tmp;
    }

    name[charCount - 1] = '\0';

    printf("%s\n", name);
}