#include <stdio.h>

float max_temp = 1000;

int temp_ex (float);
int main ()
{
    int no_inputs;
    float temp;
    printf("number of inputs: ");
    scanf("%d", &no_inputs);
    for (int i = 0; i < no_inputs; i++)
    {
        printf("temp: ");
        scanf("%f", &temp);
        printf("%d\n", temp_ex(temp));
    }
    
}

int temp_ex (float n)
{
    static int ex_count = 0;
    
    if (n > max_temp)
    {
        printf("exceeded!\n");
        ex_count++;
    }

    return ex_count;
}