// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int pal (char*);

int main() {
    char input [5][20];
    for (int i = 0; i < 5; i++)
    {
        printf ("input word number %d: ", i + 1);
        scanf("%s", input[i]);
        if (pal(&input[i][0]))
        {
                printf("'%s' is a palindrome\n", input[i]);
        }
        
        else
        {
             printf("'%s' is not a palindrome\n", input[i]);
        }
    }
    return 0;
}

int pal (char* input)
{
    char tmp [20];
    int len = strlen (input) - 1;
    for (int i = 0; input[i] != '\0'; i++)
    {
        tmp[len - i] = input[i];
    }
    
    if (strcmp (tmp, input) == 0)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
    
}
