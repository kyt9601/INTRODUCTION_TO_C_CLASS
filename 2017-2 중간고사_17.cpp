#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d",&n);

	if (10000 > n)
		printf("0,");
	else
	{
		printf("%d,",n/10000);
		n -= (n/10000*10000);
	}

	if (1000 > n)
		printf("0,");
	else
	{
		printf("%d,",n/1000);
		n -= (n/1000*1000);
	}

	if (100 > n)
		printf("0,");
	else
	{
		printf("%d,",n/100);
		n -= (n/100*100);
	}

	if (10 > n)
		printf("0,");
	else
	{
		printf("%d,",n/10);
		n -= (n/10*10);
	}

	if (1 > n)
		printf("0");
	else
	{
		printf("%d",n);
	}

	return 0;
}