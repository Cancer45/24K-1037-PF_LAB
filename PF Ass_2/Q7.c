#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// len global so funcs can access
int len;
//fill array
void fill (char roll[], char box[][5]);
//display array
void print (char box [][5]);
//search for input
int search (char input [], char box [][5]);
//check for input, used by search
int check (char input [], char* tar, int dir);

int main ()
{
    int score, result;
    char input [100], box [6][5], roll[7];
    do
    {
        printf("input roll number(at least 4 characters): ");
        scanf("%s", roll);
    } while (strlen(roll) < 4);
    
    while(1)
    {
        fill (roll, box);
        score = 0;
        printf("\nSHUFFLED\n");
    do
    {
        printf("score: %d\n", score);
        print (box);
        printf("input guess word (must be less than 6 letters): ");
        scanf("%s", input);
        len = strlen(input);

        //check if user wants to reset array
        if (strcmp(input, "end") == 0 || strcmp (input, "END") == 0)
        {
            break;
        }

        //user wants to end game?
        if(strcmp(input, "endgame") == 0)
        {
            printf("score: %d\n", score);
            return 0;
        }

        //input exceeds array dimensions
        if(len > 6)
        {
            continue;
        }

        //search for input
        result = search (input, box);
        if (result == 1)
        {
            printf("correct\n");
            score += result;
        }

        else
        {
            printf("incorrect\n");
            score += result;
        }   
    } while (1);
    
    }
    return 0;
}

void fill (char roll[], char box[][5])
{
    int curr_ran;
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 5 && j < 4)
            {
                box[i][3 - j] = roll[strlen(roll) - (j + 1)];
                continue;
            }

            curr_ran = (rand() % 26) + 97;
            box[i][j] = (char)curr_ran;
        }
    }
}

void print (char box [][5])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\t%c", box[i][j]);
        }
        printf("\n");
    }
}

int search (char input [], char box [][5])
{
    //rows
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < (7 - len); j++)
        {
            if (check(input, &box[i][j], 0))
            {
                return 1; //true
            }
        }
    }

    //columns
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (6 - len); j++)
        {
            if (check(input, &box[i][j], 1))
            {
                return 1; //true
            }
        }
    }
    return -1; //false
}

int check (char input [], char* tar, int dir) //tar is target, dir is direction
{
    for (int i = 0; i < len; i++)
    {
        if (*tar != input[i])
        {
            return 0;
        }
        //rows
        if (dir == 0)
        {
            tar++; //adding 1 just takes it to next column
        }

        //columns
        if (dir == 1)
        {   
            tar += 5; //rows are 6 long, so adding 6 takes tar one column down
        }
    }

    return 1;
}