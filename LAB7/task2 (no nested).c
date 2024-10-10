#include <stdio.h>

int main() {
    char in [50];
    char vows [5] = {'a', 'e', 'i', 'o', 'u'};
    int vow_count [5] = {0, 0, 0, 0, 0};
    printf("Input String (no spaces): ");
    scanf("%s", in);
    
    for (int i = 0; in [i] != '\0'; i++)
    {
        switch (in [i])
        {
            case 'a':
            vow_count [0]++;
            break;
            case 'e':
            vow_count [1]++;
            break;
            case 'i':
            vow_count [2]++;
            break;
            case 'o':
            vow_count [3]++;
            break;
            case 'u':
            vow_count [4]++;
            break;
            default:
            break;
            
        }
    }
    
    for (int j = 0; j < 5; j++)
        {
           printf("%c : %d\n", vows [j], vow_count [j]);
        }
    return 0;
}