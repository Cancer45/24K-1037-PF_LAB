#include <stdio.h>

int main() {
    char a;
    scanf(" %c", &a);
    
    if (a >= 97 && a <= 122)
    {
        printf("LOWERCASE");
    }
    
    else if (a >= 65 && a <= 90)
    {
        printf("UPPERCASE");
    }
    
    else if (a >= 48 && a <= 57)
    {
        printf("DIGIT");
    }
    
     else if ((a >= 33 && a <= 47) || (a >=58 && a <= 64) || (a >=91 && a <= 96) || (a >=123 && a <= 126))
    {
        printf("SPECIAL CHARACTER");
    }
    
    
   
    
    

    return 0;
}