#include <stdio.h>

int main() {
   
    int a = 65, b = 67;
    for (int i = 0; i <= 16; i++)
    {
      
        if (i == 0 || ((i % 4) == 0))
        {
            printf("%c %c %c %c %c", a, a + 1, a + 2, a + 3, a + 4);
            a += 4;
        }
        
        else if ((i + 1) % 2 == 0)
        {
            printf("  %c   %c", b, b + 3);
            b += 2;
        }
        
        else
        {
            printf("    %c", a);
        }
        
        printf("\n");
    }
    return 0;
}