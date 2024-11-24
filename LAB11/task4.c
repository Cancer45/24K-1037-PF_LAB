#include <stdio.h>
#include <string.h>

struct Marks
{
    float maths, science, english;
};

struct Student
{
    char name[50];
    int roll_no;
    struct Marks marks;
};

float calcAvg(struct Student student)
{
    float avg = (student.marks.english + student.marks.maths + student.marks.science) / 3;
    return avg;
}

int main ()
{
    struct Student student[5];

    //take inputs
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Name: ");
        scanf("%s", student[i].name);
        printf("Roll No: ");
        scanf("%d", &student[i].roll_no);
        printf("English: ");
        scanf("%f", &student[i].marks.english);
        printf("Maths: ");
        scanf("%f", &student[i].marks.maths);
        printf("Science: ");
        scanf("%f", &student[i].marks.science);
    }
    
    //output
    for (int i = 0; i < 5; i++)
    {
        printf("\nName: %s\nRoll No: %d\nAverage Marks: %.2f\n", student[i].name, student[i].roll_no, calcAvg(student[i]));
    }

    
    
}
