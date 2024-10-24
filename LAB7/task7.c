#include <stdio.h>
 
int main() {
    
    //init array ...and other things
    char input[100];
    int tmpnum, result = 0, length = 0, place = 1, num = 0;
    int check1, check2;
    
    
    //take input
    printf("input expression to be computed (only use '+' and '-' operators): ");
    scanf("%s", input);
    
    //length of expression
    while (input[length] != '\0')
    {
        length++;
    }
    
    check1 = input[length - 1];
    check2 = input[0];
    
    //check if first or last is operator
    if ((check1 <= 47 || check1 >= 58) || (check2 <= 47 || check2 >= 58))
    {
        printf("ERROR! expression must begin and end with a number");
        return 1;
    }
    
    //calculate expression
    for (int i = length - 1; i >= 0; i--)
    {   
        //if number
        if (input[i] > 47 && input[i] < 58)
        {
            tmpnum = input[i] - 48;
            num += tmpnum * place;
            place *= 10;
        }
        
        //if operator
        else if (input[i] == 43)
        {
            result += num;
            num = 0;
            place = 1;       
        }
        
        else if (input[i] == 45)
        {
            result -= num;
            num = 0;
            place = 1;
        }
        
    }
    
    //add last number
    result += num;
    printf("%d", result);
    return 0;
}
