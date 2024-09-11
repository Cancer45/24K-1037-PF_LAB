#include <stdio.h>

int main ()
{
	double sal, tax_rate, tax_owed, salary_remain;
	printf("Enter Salary: ");
	scanf("%lf", &sal);
	printf("Enter Tax Rate: ");
	scanf("%lf", &tax_rate);
	tax_owed = (sal * (tax_rate / 100));
	salary_remain = sal - tax_owed;
	
	printf("Tax owed is %.2lf and Salary Remaining is %.2lf\n", tax_owed, salary_remain);
}
