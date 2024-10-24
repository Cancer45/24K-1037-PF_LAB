#include <stdio.h>

int main() {
    
    int size;
    
    //take size
    do
    {
        printf("input size of array (must be greater than 2): ");
        scanf("%d", &size);    
    }while(size < 2);
    
    //declare input array
    int input[size];
    
    //take input
    for (int i = 0; i < size; i++)
    {
        printf("input value number %d: ", i + 1);
        scanf("%d", &input[i]);
    }
    
    //initialize two counters
    int count1 = 0, count2 = 1;
    
    //check for repeat
    while(1)
    {   //finished?
        if (count1 >= size - 1)
        {
            printf("\nno repeated values");
            break;
        }
        
        //two values equal?
        if (input[count1] == input[count2])
        {
            printf("%d is repeated", input[count1]);
            break;
        }
        
        //goto next value to be checked
        if (count2 == (size - 1))
        {
            count1++;
            count2 = count1 + 1;
        }
        
        else
        {
            count2++;
        }
    }

    return 0;
}
