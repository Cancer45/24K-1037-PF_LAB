#include <stdio.h>

int main() {
    
      for (int i = 0; i < 5; i++)
    {
        if(i == 0 || i == 4)
        {
            printf("*****");
           
        }
        
      else
      {
          printf("*   *");
      }
      printf("\n");
    }

    return 0;
}
