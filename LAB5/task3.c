#include <stdio.h>

int main() {
    
    // inputs
   char type, size;
   int  c_size;
   // time values and factor
   float factor, t_time, t1 = 2, t2 = 5;
    // white or black?
   printf("Input 'W' for White Coffee and 'B' for Black Coffee\n");
   scanf(" %c", &type);
    // cup size?
   printf("'R' is 100 ml and 'D' is 200 ml\n");
   printf("Input 'R' for regular, 'D' for Double or 'M' to manually enter size\n");
   scanf(" %c", &size);
   
    // select cup size
    switch (size)
   {
       case 'R':
       case 'r':
       c_size = 100;
       break;
       
       case 'D':
       case 'd':
       c_size = 200;
       break;
       
       case 'M':
       case 'm':
       printf("Input Cup Size in ml (must be greater than 100 ml)\n");
       scanf("%d", &c_size);
       break;
       
       default:
       printf("You didn't select a valid option :(\nTry Again");
       return 1;
   }
       
    // check c_size
    if (c_size < 100)
    {
        printf("Cup Size must be greater than 100 ml\nTry Again");
        return 1;
    }
    
    //adjusting times according to cup size
    if (c_size != 100)
    {
        factor = (1 + (0.5 * ((c_size / 100) - 1)));
        t1 *= factor;
        t2 *= factor;
    }
    
    // display times for each step
   
   switch (type)
   {
       case 'W':
       case 'w':
        printf("Adding Water... (%.0f mins)\n", (3 * t2));
        printf("Adding Sugar... (%.0f mins)\n", (3 * t2));
        printf("Mixing... (%.0f mins)\n", (4 * t2));
        printf("Adding Coffee... (%.0f mins)\n", (t1));
        printf("Adding Milk... (%.0f mins)\n", (2 * t1));
        printf("Mixing... (%.0f mins)\n", (4 * t2));
        break;
       
       case 'B':
       case 'b':
        printf("Adding Water... (%.0f mins)\n", (4 * t2));
        printf("Adding Sugar... (%.0f mins)\n", (4 * t2));
        printf("Mixing... (%.0f mins)\n", (5 * t2));
        printf("Adding Coffee... (%.0f mins)\n", (3 * t2));
        printf("Mixing... (%.0f mins)\n", (5 * t2));
        break;
        
        default:
        printf("You didn't select a valid option :(\nTry Again");
        return 1;
   }
   
   return 0;
} 
