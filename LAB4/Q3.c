#include <stdio.h>

int main() {
    char a;
    double num1, num2;
    printf("Input First Number: ");
    scanf("%lf", &num1);
    printf("Input Second Number: ");
    scanf("%lf", &num2);
    printf("Input an operator: '+', '-', '*', '/' \n");
    scanf(" %c", &a);
    
    switch (a)
    {
        case '+':
        printf ("SUM: %.2lf", num1 + num2);
        break;
        case '-':
        printf ("DIFFERENCE: %.2lf", num1 - num2);
        break;
        case '*':
        printf ("PRODUCT: %.2lf", num1 * num2);
        break;
        case '/':
        printf ("QUOTIENT: %.2lf", num1 / num2);
        break;
        
        default:
        printf("Input a Valid Operator");
    }
    

    return 0;
}