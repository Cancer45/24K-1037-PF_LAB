#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fill ();
int update (char input); //returns 0 if quit
void print ();
char grid[5][5];
int curr[2] = {0,0}, score = 0;

int main ()
{
    int t = 0;
    fill();
    printf("\npress 'w' for up, 's' for down, 'd' for right and 'a' for left\npress Enter to lock in your choice(ik ik, i wish it was non-canonical 2 :'()\npress 'q' to quit\n");
    while (t != 1)
    {
        print();
        printf("\nenter move: ");
        t = update(getchar());

        if (t == -1)
        {
            printf("obstacle ahead, try again");
        }

        else if (t == 2)
        {
            printf("out of bounds, try again");
        }

        if (t == 1)
        {
            printf("quitting\nscore: %d\n", score);
        }
    }
    
}

void fill ()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            grid[i][j] = (i == 3 && j == 4) ? 'I':
            (i == 2 && j == 3) ? 'X':
            (i == 0 && j == 0) ? 'P':
            ' ';
        }
    }
}

int update (char input)
{
    //if 'q', quit
    if (input == 'q')
    {
        return 1;
    }

    //tar points to target, move[] is x and y direction for movement
    //new1 is target's x value, new2 is target's y value
    char* tar;
    int move[2] = {0, 0}, new1, new2;

    //updates move depending on where move
    move[0] = input == 'w' ? -1:
    input == 's' ? 1:
    0;
    move[1] = input == 'd' ? 1:
    input == 'a' ? -1:
    0;

    //news init
    new1 = curr[0] + move[0];
    new2 = curr[1] + move[1];

    //checks for out of bounds
    if (new1 > 4 || new2 > 4 || new1 < 0 || new2 < 0)
    {
        return 2;
    }

    //init target
    tar = &grid[curr[0] + move[0]][curr[1] + move[1]];

    //if no obstacle
    if (*tar != 'X')
    {
        grid[curr[0]][curr[1]] = ' ';

        if (*tar == 'I')
        {
            int igo1, igo2, ter = 0;
            srand(time(NULL));

            while (ter == 0)
            {
                igo1 = rand() % 5;
                igo2 = rand() % 5;

                if (grid[igo1][igo2] == ' ')
                {
                    grid[igo1][igo2] = 'I';
                    ter = 1;
                }
            }
            score++;
        }

        *tar = 'P';
        curr[0] = new1;
        curr[1] = new2;

        return 0;
    }

    //if obstacle
    else
    {
        return -1;
    }
}

void print ()
{
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n|");
        for (int j = 0; j < 5; j++)
        {
            printf("%c|", grid[i][j]);
        }
    }

    printf("\nscore: %d: ", score);
}