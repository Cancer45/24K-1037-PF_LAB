#include <stdio.h>

int main ()
{
	int a, b, temp;
	printf("input first value \n");
	scanf("%d", &a);
	printf("input second  value \n");
	scanf("%d", &b);
	temp = a;
	a = b;
	b = temp;
	printf ("first: %d\nsecond: %d\n", a, b);
}
