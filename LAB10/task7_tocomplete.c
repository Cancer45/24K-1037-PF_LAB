#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
}dates[2];

int leap (int year);
int valid_date (struct date);
int wotday (struct date);
int day_diff (struct date, struct date);

int main ()
{
    /*int i;
    char days[7][100] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for (i = 0; i < 2; i++)
    {
        printf("input date %d: ", i + 1);
        scanf("%d %d %d", &dates[i].day, &dates[i].month, &dates[i].year);
        
        if (valid_date(dates[i]))
        {
            printf("date %d is valid\n", i + 1);
            printf("day on date %d is %s\n", i + 1, days[wotday(dates[i])]);
        }

        else
        {
            break;
        }
    }

    if (i == 2)
    {
        printf("the difference between the two dates is %d days\n", day_diff(dates[0], dates[1]));
    }*/
    
}

int valid_date (struct date date)
{
    int g1[7] = {1, 3, 5, 7, 8, 10, 12};
    int g2[4] = {4, 6, 9, 11};
    
    for (int i = 0; i < 7; i++)
    {
        if (date.month == g1[i])
        {
            if (date.day > 31)
            {
                return 0;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (date.month == g2[i])
        {
            if (date.day > 30)
            {
                return 0;
            }
        }
    }

    if (leap(date.year))
    {
        if (date.day > 29)
        {
            return 0;
        }
    }

    else
    {
        if (date.day > 28)
        {
            return 0;
        }
    }
}

int wotday (struct date input)
{

}

int day_diff (struct date d1, struct date d2)
{
    
}

int leap (int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            return 1;
        }

        else
        {
            if (year % 400 == 0)
            {
                return 1;
            }

            else
            {
                return 0;
            }
        }
    }
    return 0;
}