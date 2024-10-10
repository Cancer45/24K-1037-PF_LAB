#include <stdio.h>

int main() {
    char in [50];
    char vows [5] = {'a', 'e', 'i', 'o', 'u'};
    int vow_count [5] = {0, 0, 0, 0, 0};
    printf("Input String: ");
    scanf("%s", in);
    
    // @SirMonis, u gave permission for nested :|
    
    for (int i = 0; in [i] != '\0'; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (in [i] == vows [j])
            {
                vow_count [j]++;
            }
        }
    }
    
    for (int j = 0; j < 5; j++)
    {
    	printf("%c : %d\n", vows [j], vow_count [j]);
    }
    return 0;
}
