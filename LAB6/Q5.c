#include <stdio.h>

int main() {
    
      int row, col;
      for (int i = 1; i <= 30; i++)
    {
        row = ((i / 5) + 1);
        col = i % 5;
        
        if((row % 5) == 1 || col == 1 || col == 0)
        {
            printf("* ");
           
        }
        
        else
        {
          printf("  ");
        }
      
      if (col == 0)
      {
          printf("\n");
      }
    }

    return 0;
}
