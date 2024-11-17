#include <stdio.h>
#include <string.h>



void bubble_rise (int [], int);

int main ()
{
    int n;
    printf("size of array: ");
    scanf("%d", &n);
    int num[n];

    //fill array
    for (int i = 0; i < n; i++)
    {
        printf("number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    //before sort
    printf("UNSORTED\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }

    //sort
    bubble_rise(num, n);

    //after sort
    printf("SORTED\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
}

void bubble_rise (int input[], int n)
{
    if (n > 1)
    {
        int tmp;
        for (int i = 0; i < n - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                tmp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = tmp;
            }
        }

        bubble_rise (input, n - 1);
    }
}