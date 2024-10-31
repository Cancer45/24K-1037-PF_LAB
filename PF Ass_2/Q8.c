#include <stdio.h>
#include <math.h>
#include <string.h>

int btod (int number);
int dtob (int number);
void btoh (int number);
void dtoh (int number);
void htod (char* hexNumber);
void htob (char* hexNumber);
void print (char** menu);

int main ()
{
    int tmp;
    char* menu [6] = {"1. bin to dec", "2. dec to bin", "3. bin to hex", "4. dec to hex", "5. hex to dec", "6. hex to bin"};
    
    //obvious?
    print(menu);

    //select con type
    printf("input conversion type: ");
    scanf("%d", &tmp);
    
    //take number
    printf("input number: ");
    if (tmp <= 4)
    {
        int num;
        scanf("%d", &num);

        switch (tmp)
        {
            case 1:
            printf("%d\n", btod(num));
            break;

            case 2:
            printf("%d\n", dtob(num));
            break;

            case 3:
            btoh(num);
            break;

            case 4:
            dtoh(num);
            break;

            default:
            break;
        }
    }

    else
    {
        char* hex;
        scanf("%s", hex);

        switch (tmp)
        {
            case 5:
            htod(hex);
            break;

            case 6:
            htob(hex);
            break;

            default:
            break;
        }
    }
}

void print (char** menu)
{
    for (int i = 0; i < 6; i++)
    {
        printf("%s", menu[i]);
        printf("\n");
    }
}

int btod (int number)
{
    int result = 0;
    for (int i = 0; number > 0; i++)
    {
        result += (number % 10) * (pow(2, i));
        number /= 10;
    }
    return result;
}

int dtob (int number)
{   
    int arr [30] = {-1}, result = 0, count = 0;
    for (int i = 1; number > 0; i++)
    {
        arr [30 - i] = number % 2;
        number /= 2;
    }

    for (int i = 29; i > 0; i--)
    {
        if (arr [i] != -1)
        {
            result += arr[i] * pow(10, count);
            count++;
        }
    }
    return result;
}

void btoh (int number)
{
    int count1 = 0, count2 = 0, tmp = 0;
    char result[100];
    char arr [16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    for (int i = 0; number > 0; i++)
    {
        tmp += number % 10 * pow (2, count1);
        number /= 10;
        count1++;

        if (count1 % 4 == 0 || number == 0)
        {
            result [count2] = arr[tmp];
            count2++;
            count1 = 0;
        }
    }

    printf("%s\n", result);
}

void dtoh (int number)
{
    number = dtob(number);
    btoh(number);
}

void htod (char* hexNumber)
{
    int tmp, result = 0;
    for (int i = 0; i < strlen(hexNumber); i++)
    {
        if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F')
        {
            tmp = hexNumber[i] - 'A' + 10;
        }

        else
        {
            tmp = hexNumber[i] - '0';
        }

        result += tmp * pow(16, i);
    }
    printf("%d\n", result);
}

void htob (char* hexNumber)
{
    int tmp, tmp1 = 0;
    char arr [16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    for (int i = 0; i < strlen(hexNumber); i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (hexNumber[i] == arr[j])
            {
                tmp = j;
            }
        }
        printf("%d\n", dtob(tmp));
    }
}