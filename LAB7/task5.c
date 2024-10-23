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
    

    for (int i = 0; i < 100; i++)
    {
        //skip if counted
        if (m != 0 && input[m] == input[0])
        {
            m++;
            n = 0;
        }
        
        else
        {
            if (input[m] == input[n])
            {
                count++;
                input[n] = input[0];
            }
        
            //print
            if (n == 9)
            {
                printf("frequency of %d: %d\n", input[m], count);
                count = 0;
                n = 0;
                m++;
            }
        }
        n++;
    }
    return 0;
}
