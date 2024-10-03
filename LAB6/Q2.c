#include <stdio.h>

int main() {
    
    int in;
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
              printf("Prime");
          }
      }

    return 0;
}
