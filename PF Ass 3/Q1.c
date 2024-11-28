#include <stdio.h>

struct Date
{
  int day, month, year;
};

struct Employee
{
  int employeeCode;
  char employeeName[50];
  struct Date dateOfJoining;
};

void fillEmployee (struct Employee* employee)
{
  printf("\n\nName: ");
  scanf("%s", employee->employeeName);
  printf("Code: ");
  scanf("%d", &employee->employeeCode);
  printf("Date of Joining: ");
  scanf("%d %d %d", &employee->dateOfJoining.day, &employee->dateOfJoining.month, &employee->dateOfJoining.year);
}

int checkTenure(struct Date currentDate, struct Employee employee)
{
  //to years
  float currentInYears, employeeInYears, diff;
  
  currentInYears = (currentDate.day / 365.25) + (currentDate.month / 12) + (currentDate.year);
  employeeInYears = (employee.dateOfJoining.day / 365.25) + (employee.dateOfJoining.month / 12) + (employee.dateOfJoining.year);
  
  diff = currentInYears - employeeInYears;
  if (diff > 3)
  return 1;
  
  else
  return 0;
}

int main()
{
    struct Employee employee[4];
    struct Date currentDate;
    
    printf("Today's Date: ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);
    
    for (int i = 0; i < 4; i++)
    {
      fillEmployee(&employee[i]);
      
      if (checkTenure(currentDate, employee[i]))
      {
        printf("\nEmployee %d at the company for more than 3 years!\n", i + 1);
        printf("Name: %s\nCode: %d\nDate of Joining: %d/%d/%d\n", employee[i].employeeName, employee[i].employeeCode, employee[i].dateOfJoining.day, employee[i].dateOfJoining.month, employee[i].dateOfJoining.year);
      }
    }
}
