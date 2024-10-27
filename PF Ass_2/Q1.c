#include <stdio.h>

int main() {
    int input[5], num1, num2;
    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("input integer number %d (must be less than 9999): ", i + 1);
            scanf("%d", &input[i]);    
        } while (input[i] >= 9999);
        
    }
    
    if (input[0] < input[1])
    {
        num1 = input[0];
        num2 = input[1];
    }
    
    else
    {
        num1 = input[1];
        num2 = input[0];
    }
    
    for (int i = 2; i < 5; i++)
    {
        if (input[i] > num1 && input[i] < num2)
        {
            num2 = input[i];
        }
        
        else if (input[i] < num1)
        {
            num2 = num1;
            num1 = input[i];
        }
    }
    
    printf("second smallest is %d", num2);
    

    return 0;
}
