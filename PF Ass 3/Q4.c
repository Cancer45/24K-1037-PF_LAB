#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int* ratings;
    int totalScore;
};

void inputEmployees (int** ratings, int numEmployees, int numPeriods)
{
    int tmp;
    for (int i = 0; i < numEmployees; i++)
    {
        printf("\nEMPLOYEE %d\n", i + 1);
        for (int j = 0; j < numPeriods; j++)
        {
            do 
            {
                printf("Period %d: ", j + 1);
                scanf("%d", &tmp);
            } while (tmp < 0 || tmp > 10);

            *(ratings[i] + j) = tmp;
        }    
    }
}

void displayPerformance (int** ratings, int numEmployees, int numPeriods)
{
    printf("\t");
    for (int i = 0; i < numEmployees; i++)
    {
        printf("    EMPLOYEE %d\t", i + 1);
    }
    printf("\n");

    for (int i = 0; i < numPeriods; i++)
    {
        printf("PERIOD %d\t", i + 1);
        for (int j = 0; j < numEmployees; j++)
        {
            printf("%d\t\t", *(ratings[j] + i));
        }
        printf("\n");
    }
}

int findEmployeeOfTheYear (int** ratings, int numEmployees, int numPeriods)
{
    float highestAvg = 0, tmp;
    int index = -1;

    for (int i = 0; i < numEmployees; i++)
    {
        tmp = 0;
        for (int j = 0; j < numPeriods; j++)
        {
            tmp += *(ratings[i] + j);
        }

        tmp = tmp / (float)numPeriods;

        if (tmp > highestAvg)
        {
            highestAvg = tmp;
            index = i;
        }
    }

    return index;
}

int findHighestRatedPeriod (int** ratings, int numEmployees, int numPeriods)
{
    float highestAvg = 0, tmp;
    int index = -1;

    for (int i = 0; i < numPeriods; i++)
    {
        tmp = 0;
        for (int j = 0; j < numEmployees; j++)
        {
            tmp += *(ratings[j] + i);
        }

        tmp = tmp / (float)numEmployees;

        if (tmp > highestAvg)
        {
            highestAvg = tmp;
            index = i;
        }
    }

    return index;
}

int findWorstPerformingEmployee (int** ratings, int numEmployees, int numPeriods)
{
    float highestAvg = 10, tmp;
    int index = -1;

    for (int i = 0; i < numEmployees; i++)
    {
        tmp = 0;
        for (int j = 0; j < numPeriods; j++)
        {
            tmp += *(ratings[i] + j);
        }

        tmp = tmp / (float)numPeriods;

        if (tmp < highestAvg)
        {
            highestAvg = tmp;
            index = i;
        }
    }

    return index;
}

int main ()
{
    //intialize primary values
    int numEmployees, numPeriods;
    int** ratings; //question didn't say 'use the struct' ¯\_(ツ)_/¯

    //get number of employees and periods
    printf("Number of Employees: ");
    scanf("%d", &numEmployees);
    printf("Number of Periods: ");
    scanf("%d", &numPeriods);

    //allocate memory
    ratings = (int**)malloc(numEmployees * sizeof(int*));

    for (int i = 0; i < numEmployees; i++)
    {
        ratings[i] = (int*)malloc(numPeriods * sizeof(int));
    }

    //get and display input
    inputEmployees(ratings, numEmployees, numPeriods);
    displayPerformance(ratings, numEmployees, numPeriods);

    //get and display EOY, HRP, WPE
    int EOY = findEmployeeOfTheYear(ratings, numEmployees, numPeriods);
    int HRP = findHighestRatedPeriod(ratings, numEmployees, numPeriods);
    int WPE = findWorstPerformingEmployee(ratings, numEmployees, numPeriods);
    
    if (EOY >= 0)
    printf("\nEmployee %d is EMPLOYEE OF THE YEAR\n", EOY + 1);
    if (HRP >= 0)
    printf("Period %d is the HIGHEST RATED PERIOD\n", HRP + 1);
    if (WPE >= 0)
    printf("Employee %d is the WORST PERFORMING EMPLOYEE\n", WPE + 1);

    for (int i = 0; i < numEmployees; i++)
    free(ratings[i]);
    free (ratings);
}