#include <stdio.h>
#include <string.h>

int pal (char[100]);

int main ()
{
    //declare
    char in[5][100];
    int no_words;
    //input
    printf("number of inputs: ");
    scanf("%d", &no_words);
    for (int i = 0; i < no_words; i++)
    {
        printf("input word number %d: ", i + 1);
        scanf("%s", in[i]);
    }

    //check
    for (int i = 0; i < no_words; i++)
    {
        if (pal(in[i]))
        printf("'%s' is a palindrome\n", in[i]);
    
        else
        printf("'%s' is not a palindrome\n", in[i]);
    }

}

int pal (char in[100])
{
    int end = strlen(in) - 1;
    for (int i = 0; i <= (end / 2); i++)
    {
        if (in[i] != in[end - i])
        {
            return 0;
            break;
        }
        
        if (i == end)
        return 1;
    }
}
