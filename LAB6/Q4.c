#include <stdio.h>

int main() {
    
    int in, sum = 0, tmp, n;
    printf("Enter your Number: ");
    scanf("%d", &in);
    tmp = in;
      while(tmp > 0)
    {
        n = tmp % 10;
        sum += (n * n * n);
        tmp /= 10;
    }
    
    if (sum == in)
    {
        printf("Armstrong");
    }
    
    else
    {
          printf("Not Armstrong");
    }

    return 0;
}
