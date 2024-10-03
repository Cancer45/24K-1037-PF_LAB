#include <stdio.h>

int main() {
    
    int n = 65, a = 67;
      for (int i = 0; i < 5; i++)
    {
        if(i == 0 || i == 4)
        {
            printf("%c %c %c %c %c", n, n + 1, n + 2, n + 3, n + 4);
            n += 4;
        }
        
        else if (i == 1 || i == 3)
        {
            printf("  ");
            printf("%c", a);
            printf("   ");
            a += 3;
            printf("%c", a);
            a -= 1;
        }
        
        else
        {
            printf("    %c", n);
        }
        
        printf("\n");
    }

    return 0;
}