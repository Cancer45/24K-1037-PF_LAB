#include <stdio.h>

int main() {
    
    int null = 0;
    float gpa;
    printf("Input your GPA: ");
    scanf("%f", &gpa);
    
    gpa >= 0.00 && gpa <= 0.99 ?
    printf("Failed semester - registration suspended")
    : null;
     gpa >= 1.00 && gpa <= 1.99 ?
    printf("On probation for next semester")
    : null;
     gpa >= 2.00 && gpa <= 2.99 ?
    printf("(no message)")
    : null;
     gpa >= 3.00 && gpa <= 3.49 ?
    printf("Dean's List for semester")
    : null;
     gpa >= 3.50 && gpa <= 4.00 ?
    printf("Highest honors for semester")
    : null;
    
    return 0;
} 