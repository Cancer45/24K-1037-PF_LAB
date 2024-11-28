#include <stdio.h>
#include <stdlib.h>

int validateEmail(char* email)
{
    int i, flag1 = 0, flag2 = 0; //flag1 is for '@', flag2 is for '.'

    for (i = 0; i < sizeof(email); i++)
    {
        //if '@'
        if (email[i] == '@')
        {
            //check '@' flag
            if (!flag1)
            {
                flag1 = 1;
            }

            //return 0 is already checked (more than one)
            else
            {
                return 0;
            }
        }

        //if '.' after '@', check '.' flag
        if (flag1 && email[i] == '.')
        {
            flag2 = 1;
        }
    }

    //return 0 if no '@', '@' and no '.' or if i is at 0
    if (!flag1 || (flag1 && !flag2) || !i)
    return 0;

    return 1;
}

void inputAddress (char* address)
{
    
}

int main ()
{
    char* address;

    inputAddress(address);
    printf("%s", address);
}