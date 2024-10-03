#include <stdio.h>

int main() {
    
    float in, sum = 0;
    
    do
    {
        printf("Input Number: ");
        scanf("%f", &in);
        sum += in;
        printf("%.1f\n", sum);
    }
    while(in != 0);

    return 0;
}
