#include <stdio.h>

int cheat (int ma_es);

int main ()
{
    unsigned int ma_es;
    printf("input number of matchsticks: ");
    scanf("%d", &ma_es);

    if (cheat(ma_es) == -1)
    {
        printf("if opponent does not blunder,\nwinning game impossible :(\n");
    }

    else if (cheat(ma_es) == 0)
    {
        printf("take all\nhaha, u win :)\n");
    }

    else
    {
        printf("take %d stick(s) to GUARENTEE WIN\n(unless u blunder, don't blame me then ¯\\_(ツ)_/¯ )\n", cheat(ma_es));
    }

}

int cheat (int ma_es)
{
    const int rem = ma_es % 5;
    if ((rem) == 0)
    {
        ma_es = -1;
    }

    else
    {
        ma_es = rem;
        
    }

    return ma_es;
}

