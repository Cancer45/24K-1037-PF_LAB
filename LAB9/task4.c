#include <stdio.h>

float calc (float, float, char);

int main ()
{
    float n1, n2;
    char op;
    printf("number 1: ");
    scanf("%f", &n1);
    printf("number 2: ");
    scanf("%f", &n2);

    do
    {
        printf("operation ('+', '-', '*', '/'): ");
        scanf(" %c", &op);
    } while (op != '+' && op != '-' && op != '*' && op != '/');
    
    printf("result: %.3f\n", calc(n1, n2, op));
}

float calc (float n1, float n2, char op)
{
    switch (op)
    {
        case '+':
        return n1 + n2;

        case '-':
        return n1 - n2;

        case '*':
        return n1 * n2;

        case '/':
        return n1 / n2;
    }
}