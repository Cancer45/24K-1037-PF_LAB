#include <stdio.h>

int main() {
    
    char input[100];
    int count;
    
    //take input
    printf("input a word(no spaces): ");
    scanf("%s", input);
    //check input
    printf("word is %s: \n", input);
    
    //count
    for (count = 0; input[count] != '\0'; count++)
    {
    }
    
    //check count
    printf("length is: %d\n", count);
    
    //check if palindrome
    for (int i = 0; i < (count / 2); i++)
    {
        if (input[i] != input[count - (i + 1)])
        {
            printf("not palindrome");
            break;
        }
        
        else
        {
            if (i == ((count / 2) - 1))
            {
                printf("palindrome");    
            }
        }
    }
    return 0;
}