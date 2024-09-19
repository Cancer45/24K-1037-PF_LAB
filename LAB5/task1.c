#include <stdio.h>

int main() {
    
    float cal_f_fat, cal_no, fat_no;
    printf("Input fat amount (in grams): ");
    scanf("%f", &fat_no);
    printf("Input number of calories: ");
    scanf("%f", &cal_no);
    
    if (fat_no < 0 || cal_no < 0)
    {
        printf("ERROR: Inputs must not be less than 0");
        return 1;
    }
    
    cal_f_fat = fat_no * 9;
    
    if (cal_f_fat > cal_no)
    {
        printf("ERROR: Values entered incorrect, Try Again");
        return 1;
    }
    
    printf("Calories from fat are: %.1f percent", ((cal_f_fat / cal_no) * 100));
    return 0;
} 