#include <stdio.h>

int reverse(int number);

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", reverse(n));

	return 0;
}

int reverse(int number)
{
	int tmp;

	for (tmp=0; number; number=number/10)
	{
		tmp *= 10;
		tmp += (number % 10);
	}

	return tmp;
}