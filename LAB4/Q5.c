#include <stdio.h>

int main() {
    double a, discount;
    printf("Input Amount Due: ");
    scanf(" %lf", &a);
    
    if (a < 500)
    {
        printf("Discount does not Apply\n");
        discount = 0;
    }
    
    else
    {
        if (a < 2000)
        {
            discount = a * 0.05;
        }
        
        else if (a < 4000)
        {
                discount = a * 0.1;
        }
            
             else if (a < 6000)
        {
                discount = a * 0.2;
        }
            
             else if (a > 6000)
        {
                discount = a * 0.35;
        }
    }
    printf("Original Amount: %.2lf\n Discount Applied: %.2lf\n Amount Due: %.2lf\n", a, discount, (a - discount));
    }
   
    