#include <stdio.h>

int main ()
{
    char buffer [100];
    FILE* fptr1 = fopen("dummy.txt", "r");
    FILE* fptr2 = fopen("new.txt", "w");

    if (fptr1 == NULL || fptr2 == NULL)
    {
        return 1;
    }

    while(fscanf(fptr1, "%s", buffer) != EOF)
    {
        fprintf(fptr2, "%s", buffer);    
    }

    fclose(ptr1);
    fclose(ptr2);
}