#include <stdio.h>
#include <string.h>

char* reverse (char*);

int main ()
{   
    char in[100];
    printf("input string: ");
    scanf("%s", in);

    printf("%s\n", reverse(in));    
}

char* reverse (char* in)
{
    int len = strlen(in) - 1;
    char tmp;

    for (int i = 0; i <= (len / 2); i++)
    {
        tmp = in[i];
        in[i] = in[len - i];
        in[len - i] = tmp;

    }

    return in; 
}