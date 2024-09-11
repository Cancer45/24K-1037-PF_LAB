#include <stdio.h>

int main ()
{
	int dist, trip_go, trip_back, avg;

	printf ("Please Enter the Fuel Average: ");
	scanf("%d", &avg);
	if (avg < 0)
	{
		printf ("Fuel Average must be a positive value\n");
		return 1;
	}
	dist = 1207;
	trip_go = 118;
	trip_back = 123;

	int litres = dist / avg;
	trip_go *= litres;
	trip_back *= litres;

	printf ("Total Cost for Trip: %.2lf\n", (double)trip_go + (double)trip_back);
}
