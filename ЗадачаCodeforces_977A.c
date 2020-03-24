#include "stdio.h"
#define _CRT_SECURE_NO_WARNINGS
int main(){
	int n,k;
	scanf("%i%i", &n,&k);
	while (k)
	{
		if (n % 10)
			n--;
		else n /= 10;
		k--;
	}
	printf("%i",n);
	return 0;
}
