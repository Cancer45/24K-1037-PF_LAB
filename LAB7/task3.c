#include <stdio.h>

int main() {
    char input [100];
    char* ptr;
    int count;
    
    //take input
    printf("please input a word (no spaces): ");
    scanf("%s", input);
    printf("input is '%s'\n", input);
    
    //assign pointer
    ptr = input;
    
    //count
    for (count = 0; *ptr != '\0'; count++)
    {
         ptr++;
    }
   
    //print length
    printf("length of word is %d\n", count);
    
    //initialize reversed array
    char rev [count];
    
    //set ptr to last lett
    ptr--;
    
    //reverse string
    for (int i = 0; i < count; i++)
    {
        rev [i] = *ptr;
        ptr--;
    }
    
    //print reversed
     printf("reversed is '%s'\n", rev);
    
    return 0;
}