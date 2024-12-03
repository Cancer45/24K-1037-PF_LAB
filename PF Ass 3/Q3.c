#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validateEmail(char* email)
{
    int i, flag1 = 0, flag2 = 0; //flag1 is for '@', flag2 is for '.'

    for (i = 0; i < strlen(email); i++)
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
    if (!(flag1 && flag2) || !i)
    return 0;

    return 1;
}

//pass in a double pointer to char ie a pointer to the string (represented as char*) as string needs to be modified
//if char* is passed, only the value of the pointer will be passed and updated,
//the original string will remain the same

char* getStr ()
{
    size_t count = 1;
    char tmp;
    char* str = (char*)malloc(count * sizeof(char));

    if (!str)
    {
        perror("failed to allocate memory\n");
        return NULL;
    }

    *str = '\0';

    while(1)
    {
        tmp = getchar();

        if (tmp == '\n')
        break;

        count++;
        str = (char*)realloc(str, count * sizeof(char));
        str[count - 2] = tmp;
        str[count - 1] = '\0';
    }

    return str;
}

int main ()
{
    printf("EMAIL\n");
    char* address = getStr();

    printf("%s\n", address);

    if (validateEmail(address))
    printf("VALID EMAIL\n");

    else
    printf("INVALID EMAIL\n");

    free (address);
}