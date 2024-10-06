#include <stdio.h>

int main() {

      // increase the value in the terminating condition to get multiple patterns
      int row, col, lett = 65;
      for (int i = 1; i <= 20; i++)
      {
        // in-loop variables defined row and column
        row = (((i - 1)/ 5) + 1);
        col = i % 5;
        // lett when
        if (((row % 5) == 1) || ((row == 2 || row == 4) && (col == 2 || col == 4)) || (row == 3 && col == 3))
        {
            printf("%c ", lett);
        }
        
        else
        {
            printf("  ");
        }
       // newline and adjust lett value
        if (col == 0)
        {
          printf("\n");
        }
      }
      
      // lett update
      

    return 0;
}
