#include <stdio.h>

int main() {
    
      int row, rrow, col, lett = 65;
      // increase the value in the terminating condition to get multiple patterns
      for (int i = 1; i <= 100; i++)
      {
        // in-loop variables defined row and column
        row = (((i - 1)/ 5));
        rrow = row % 4;
        col = i % 5;
        // lett when
        if ((rrow == 0) || ((rrow == 1 || rrow == 3) && (col == 2 || col == 4)) || (rrow == 2 && col == 3))
        {
            printf("%c ", lett);
        }
        
        else
        {
            printf("  ");
        }
       // newline and update lett value
      if (col == 0)
      {
          if (rrow != 3)
          {
              lett -= (2 - rrow);
          }
          
          else
          {
              lett -= 3;
          }
          
          printf("\n");
      }
      
      else if (col == 2 && (rrow == 1 || rrow == 3))
      {
          lett += 3;
      }
      
      else if (rrow == 0)
      {
          lett++;
      }
      }
      
    return 0;
}
