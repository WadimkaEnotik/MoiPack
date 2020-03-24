#include "stdio.h"
int main()
{
	int a, b,sch=0;
	scanf("%i%i", &a, &b);
	while (a <= b)
	{
		a *= 3;
		b *= 2;
		sch++;
	}
	printf("%i", sch);
	return 0;
}
