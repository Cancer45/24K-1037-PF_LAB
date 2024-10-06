#include <stdio.h>

int main() {

      // increase the value in the terminating condition to get multiple patterns
      int row, col, lett = 65;
      for (int i = 1; i <= 200; i++)
    {
        // in-loop variables defined row and column
        row = (((i - 1)/ 5) + 1);
        col = i % 5;
        // lett when
        if ((row % 5) == 1 || col == 1 || col == 0)
        {
            printf("%c ", lett);
        }
        // space when
        else
        {
          printf("  ");
        }
      // newline and adjust lett value
      if (col == 0)
      {
          printf("\n");
          lett -= 3;
      }
      // lett update
     if (lett == 90 || lett < 65)
     {
         lett = 65;
     }
     
     else
     {
         lett++;
     }
    }

    return 0;
}
