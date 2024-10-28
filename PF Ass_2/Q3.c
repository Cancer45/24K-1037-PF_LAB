#include <stdio.h>

//removes consecutive duplicate letters
void compress (char input[]);

int main() {
    char input[100];
    printf("input slogan: ");
    scanf("%s", &input);
    compress(input);
    
    return 0;
}

void compress (char input[])
{
    char reduc[100];
    int count = 0;
    
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != input[i - 1])
        {
            reduc[count] = input[i];
            count++;
        }
    }
    
    reduc[count] = '\0';
    
    printf("%s", reduc);
}