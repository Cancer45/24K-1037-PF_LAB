#include <stdio.h>

int main() {
    
    float pH;
    printf("Input pH level: ");
    scanf("%f", &pH);
    
    if (pH > 7)
    {
        if (pH < 12)
        {
            printf("alkaline");
            return 0;
        }
        
        else
        {
            printf("very alkaline");
            return 0;
        }
    }
    
    else
    {
        if (pH == 7)
        {
            printf("neutral");
            return 0;
        }
        
        if (pH > 2)
        {
            printf("acidic");
            return 0;
        }
        
        else
        {
            printf("very acidic");
        }
    }
    return 0;
} 