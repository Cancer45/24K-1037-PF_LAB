#include <stdio.h>

int main() {
    
    int in, prime = 0;
    printf("Enter your Number: ");
    scanf("%d", &in);
      for (int i = 2; i < in; i++)
      {
          if (in % i == 0)
          {
              printf("Not Prime");
              break;
          }
          
          if (i == (in - 1))
          {
              prime = 1;
          }
      }
      
      if (prime == 1)
      {
          int tmp, n1 = 1, n2 = 1;
          
          while (n2 <= in)
          {
              printf("%d\n",n2);
              tmp = n2;
              n2 = n1 + n2;
              n1 = tmp;
          }
      }

    return 0;
}
