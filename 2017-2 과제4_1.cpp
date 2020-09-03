#include <stdio.h>

void reverse(int number);

int main(void)
{
	int number;

	scanf("%d",&number);
	
	reverse(number);

	return 0;
}

void reverse(int number)
{
	if (number != 0)
	{
		printf("%d",number%10);
		reverse(number/10);
	}
}