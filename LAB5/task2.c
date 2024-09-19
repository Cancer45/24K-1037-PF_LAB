#include <stdio.h>

int main() {
    
    char weekday, vacation;
    printf("Is it a weekday? ('y' for yes, 'n' for no): ");
    scanf(" %c", &weekday);
    printf("Are you on vacation? ('y' for yes, 'n' for no): ");
    scanf(" %c", &vacation);
    
    weekday == 'n' || vacation == 'y' ?
    printf("sleep in")
    : printf("don't sleep in");
} 