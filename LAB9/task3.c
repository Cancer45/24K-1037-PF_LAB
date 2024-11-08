#include <stdio.h>

int prime (int);

int main ()
{
    int n;
    printf("number: ");
    scanf("%d", &n);
    if (prime(n))
    {
        printf("prime\n");
    }

    else
    {
        printf("not prime\n");
    }
}

int prime (int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }

        if (i == (n - 1))
        {
            return 1;
        }
    }
}