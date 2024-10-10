#include <stdio.h>

int main() {
    int num [6] = {1, 2, 3, 4, 5, 6};
    int tar [6];
    for (int i = 0; i < 6; i++)
    {
        if (i == 5)
        {
            tar [0] = num [i];
        }
        
        else
        {
            tar [i + 1] = num [i];
        }
        
    }
    
    printf("Original\n");
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d, ", num [i]);
    }
    
    printf("\nShifted\n");
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d, ", tar [i]);
    }
    return 0;
}