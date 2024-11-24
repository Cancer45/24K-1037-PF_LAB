#include <stdio.h>
#include <string.h>

struct Company
{
    char name[100];
    int year_established;
    char departments[5][100];
};

void displayCompany(struct Company company)
{
    printf("Name: %s\nYear Established: %d\n", company.name, company.year_established);

    for (int i = 0; i < 5; i++)
    {
        printf("Department %d: %s\n", i + 1, company.departments[i]);
    }
}

int main ()
{
    struct Company company;
    
    //didn't take input cos Q didn't mention it :|
    strcpy(company.name, "Behemoth Metalworks");
    company.year_established = 1894;
    strcpy(company.departments[0], "Machining");
    strcpy(company.departments[1], "Fabrication");
    strcpy(company.departments[2], "Casting & Foundary");
    strcpy(company.departments[3], "Quality Control");
    strcpy(company.departments[4], "Engineering and Design");

    displayCompany(company);
}