#include <stdio.h>

int main ()
{
	int ID;
	float sum, unit;
	char ini;
	printf("Input Customer ID: ");
	scanf("%d", &ID);
  printf("Input Units Consumed: ");
	scanf("%f", &unit);
  printf("Input your Initial: ");
	scanf(" %c", &ini);
	
	if (unit < 200)
	{
		sum = unit * 16.20;		
	}
	
	if (unit >= 200 && unit < 300)
	{
		sum = unit * 20.10;		
	}
						
	if (unit >= 300 && unit < 500)
	{
		sum = unit * 27.10;		
	}
	
	if (unit >= 500)
	{
		sum = unit * 35.90; 
	}

	if (sum > 18000)
	{
		sum *= 1.15;
	}

	printf("Initial: %c\nCustomer ID: %d\nUnits Consumed: %.2f\nTotal Amount: %.2f\n", ini, ID, unit, sum);
}
