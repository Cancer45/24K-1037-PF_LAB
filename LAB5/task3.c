#include <stdio.h>

int main() {
    
    // inputs
   char type, size;
   int  c_size;
   // time values
   float t_time, t1 = 2, t2 = 5;
    // white or black?
   printf("Input 'W' for White Coffee and 'B' for Black Coffee");
   scanf(" %c", &type);
    // cup size?
   printf("'R' is 100 ml and 'D' is 200 ml\n");
   printf("Input 'R' for regular, Input 'D' for Double or Input 'M' to manually select size");
   scanf(" %c", &size);
   
    // select cup size
    switch (size)
   {
       case 'R':
       c_size = 100;
       
       case 'D':
       c_size = 200;
       
       case 'M':
       printf("Input Cup Size in ml: ");
       scanf("%d", &c_size);
    //adjusting times according to cup size
    if (c_size != 100)
    {
        
    }
    
    // display times for each step
   }
   
   switch (type)
   {
       case 'W':
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
       
       case 'B':
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
   }
   
} 
