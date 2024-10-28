#include <stdio.h>

void count_lett (char input[]);

int main() {
    char input[100];
    printf("input slogan: ");
    gets(input);
    count_lett(input);
    
    return 0;
}

void count_lett (char input[])
{
    //unique?
    char unique[100];
    unique[0] = input[0];
    int freq[100] = {0}, count = 1;
    
    for (int i = 0; input[i] != '\0'; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (input[i] < 'A' || (input[i] > 'Z' && input[i] < 'a') || input[i] > 'z')
            {
                continue;
            }
            if (input[i] == unique[j])
            {
                break;
            }
            
            if (j == (count - 1))
            {
                unique[count] = input[i];
                count++;
            }
        }
    }
    
    //count
    for (int i = 0; input[i] != '\0'; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (input[i] == unique[j])
            {
                freq[j]++;
            }
        }
    }
    
    //print
    for (int j = 0; j < count; j++)
    {
       printf("%c:%d\n", unique[j], freq[j]);
    }
}