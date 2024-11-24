#include <stdio.h>
#include <string.h>

int main ()
{
    char to_replace[50], new_word[50], buffer[1000], buffer_cpy[2000], tmp[50];

    printf("word to replace: ");
    scanf("%s", to_replace);

    printf("replace with: ");
    scanf("%s", new_word);

    FILE* fptr = fopen("replace_words.txt", "r");
    
    if (fptr == NULL)
    {
        perror("can't open to read\n");
        return 1;
    }

    //read into buffer
    int i = 0;
    while ((buffer[i] = fgetc(fptr)) != EOF) 
    {
        i++;
    }

    buffer[i] = '\0';

    int count1 = 0, count2 = 0; //count1 tracks tmp, count2 tracks buffer_cpy
    int found = 0; //found flag

    //iterate through buffer
    for (int j = 0; j <= i; j++)
    {
        //if buffer has space (word ends) 
        if (buffer[j] == ' ' || buffer[j] == '\0')
        {   
            //terminate tmp with null char
            tmp[count1] = '\0';

            //set tmp size back to 0
            count1 = 0;

            //check if word to_replace
            if (!strcmp(to_replace, tmp))
            {   
                //set found flag if false
                if (!found)
                found = 1;

                //copy new_word into buffer_cpy
                strcpy(&buffer_cpy[count2], new_word);
                
                //update size of buffer_cpy
                count2 += strlen(new_word);
            }

            else
            {   
                //copy tmp into buffer_cpy
                strcpy(&buffer_cpy[count2], tmp);
                
                //update size of buffer_cpy
                count2 += strlen(tmp);
            }

            //terminate buffer_cpy with current buffer char (counld be ' ' or '.' etc)
            buffer_cpy[count2] = buffer[j];
            count2++;
        }

        else
        {   
            //if no word ends, cpy current buffer char to tmp
            tmp[count1] = buffer[j];
            count1++;
        }
    }

    //terminate buffer_cpy
    buffer_cpy[count2] = '\0';

    //check if word is not in file
    if (!found)
    {
        printf("word not in file. try again\n");
        return 0;
    }   

    else
    {
        fptr = fopen("replace_words.txt", "w");
        
        if (fptr != NULL)
        {
            fprintf(fptr, "%s", buffer_cpy);
        }

        else
        {
            perror("can't open to write\n");
            return 1;
        }
        
    }
}