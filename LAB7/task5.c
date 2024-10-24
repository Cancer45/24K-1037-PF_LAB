#include <stdio.h>

int main() {
    //take input
    int input[10], count = 0;
    int m = 0, n = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("input value number %d: ", i + 1);
        scanf("%d", &input[i]);    
    }
    
    //while index for current count is within array boundaries
    for (; m < 10;)
    {
        //if not first index, and first value, skip
        if ((m != 0) && (input[m] == input[0]))
        {
            m++;
            n = m;
            continue;
        }
        
        //change to first value to siginify counted
       if(input[m] == input[n])
       {
           //only change if not current so that it doesn't skip over current value
           if (n != m)
           {
               input[n] = input[0];
           }
           count++;
       }
       
       //end of array at 9, update count and indexes
       if(n == 9)
       {
           printf("frequency of %d is %d\n", input[m], count);
           count = 0;
           n = m;
           m++;
       }
       n++;
    }
    return 0;
}
