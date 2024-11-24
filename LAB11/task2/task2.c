/*
open file in "r" mode.
read from file into tmp array (using fgetc() until SPACE)
check if tmp is in uniqueWords array
if yes, update frequency array corresponding to the same index
if no, strcpy() from tmp to uniqueWords AND update frequency array with the same index
when fgetc is EOF, exit loop
print all uniqueWords and corresponding freq array vals
*/

#include <stdio.h>
#include <string.h>

int main ()
{   
    char uniqueWords[20][50] = {{'\0'}};
    int freq[20] = {0};
    int counter = 0;

    char tmp[50];

    //declare and init fptr to open file to read from in read mode
    FILE* fptr1 = fopen("count_words.txt", "r");

    //check for correct assignment (perhaps the file was moved or deleted)
    if (fptr1 == NULL)
    {
        return 1;
    }
    //iterate through all chars in file one by one
    int found, eof = 0, i = 0; //found  and endOfFile flags and tmp counter (i)
    while (1)
    {
        tmp[i] = fgetc(fptr1);

        if (tmp[i] == EOF)
        {
            eof = 1;
        }

        if (tmp[i] == ' ' || tmp[i] == '\n' || eof)
        {
            tmp[i] = '\0';
            i = 0;
            found = 0;
            for (int j = 0; j <= counter; j++)
            {
                if (!strcmp(tmp, uniqueWords[j]))
                {
                    freq[j]++;
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                strcpy(uniqueWords[counter], tmp);
                freq[counter]++;
                counter++;
            }
        }

        else
        {
            i++;
        }

        if (eof)
        break;
    }

    for (int i = 0; i < counter; i++)
    {
        printf("%s: %d\n", uniqueWords[i], freq[i]);
    }
    
    //close file (free up system resources allocated at fopen, let OS know file is no longer in use)
    fclose(fptr1);
}