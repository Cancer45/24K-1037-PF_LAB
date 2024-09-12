#include <stdio.h>

int main() {
    int a;
    printf("Input an integer Number: ");
    scanf("%d", &a);
    
    switch (a%3)
    {
        case 0: 
        printf("This number is a multiple of 3");
        break;
        
        default:
        printf("Not A Multiple of 3");
    }

    return 0;
}