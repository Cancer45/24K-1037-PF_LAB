#include <stdio.h>

int main ()
{
	double prin, roi, time;
	printf("Input Principal Amount(Rs): ");
	scanf("%lf", &prin);
	
	if (prin <= 100 || prin >= 1000000)
	{
		printf("Principal Amount must be between 100 and 1,000,000 Rupees\n");
		return 1;
	}
	
	printf("Input Interest Rate: ");
	scanf("%lf", &roi);
  
	if (roi <= 5 || roi >= 10)
	{
		printf("Interest Rate must be between 5 and 10 Percent\n");
		return 1;
	}

	printf("Input Time Period: ");
	scanf("%lf", &time);
	
	if (time <= 1 || time >= 10)
	{
		printf("Time Period must be between 1 and 10 years\n");
		return 1;
	}
	
	double simple_in = prin *(roi/100) * time;
	printf ("Simple Interest over %.0lf years is %.2lf\n", time, simple_in);
}
