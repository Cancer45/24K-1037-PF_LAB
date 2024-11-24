#include <stdio.h>
#include <string.h>

struct Address
{
    char city[50];
    int zipcode;
};

struct Employee
{
    char name[50];
    int id;
    float salary;
    struct Address address;
};

void displayDetails (struct Employee employee)
{
    printf("\nName: %s\nID: %d\nSalary: %.2f\nCity: %s\nZip Code: %d\n", employee.name, employee.id, employee.salary, employee.address.city, employee.address.zipcode);
}

void writeDetails (FILE* fptr, struct Employee employee)
{
    fprintf(fptr, "Name: %s\nID: %d\nSalary: %.2f\nCity: %s\nZip Code: %d\n-----------------------------\n", employee.name, employee.id, employee.salary, employee.address.city, employee.address.zipcode);
}

int main ()
{
    int n;
    printf("Number of Employees: ");
    scanf("%d", &n);

    struct Employee employees[n];
    FILE* fptr = fopen("store_details.txt", "w");

    for (int i = 0; i < n; i++)
    {
        printf("\nName: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("City: ");
        scanf("%s", employees[i].address.city);
        printf("Zip Code: ");
        scanf("%d", &employees[i].address.zipcode);

        writeDetails(fptr, employees[i]);
    }

    for (int i = 0; i < n; i++)
    {
        displayDetails(employees[i]);
    }
}