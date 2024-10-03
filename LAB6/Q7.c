#include <stdio.h>

int main() {
    
    int n = 65, a = 66;
      for (int i = 0; i < 5; i++)
    {
        if(i == 0 || i == 4)
        {
            printf("%c %c %c %c %c", n, n + 1, n + 2, n + 3, n + 4);
            n += 5;
        }
        
        else
        {
            printf("%c", a);
            printf("       ");
            a += 4;
            printf("%c", a);
            a -= 3;
        }
        
        printf("\n");
    }

    return 0;
}