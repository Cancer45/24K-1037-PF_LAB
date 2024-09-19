#include <stdio.h>

int main() {
    
    int num, lastDigit;
    printf("Input Integer: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;
    
    if (lastDigit == 0)
    {
        printf ("last digit zero");
    }
    
    else
    {
        printf("last digit non-zero");
    }
    
    
    return 0;
} 