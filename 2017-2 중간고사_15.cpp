#include <stdio.h>

int main(void)
{
	int i, j;

	for (i=1; i<6; i++)
	{
		for (j=0; j<i; j++)
			printf("*");
		for (j=0; j<5-i; j++)
			printf(" ");
		printf(" ");
		for (j=0; j<5-i; j++)
			printf(" ");
		for (j=0; j<i; j++)
			printf("*");
		printf("\n");
	}

	for (i=4; 0<i; i--)
	{
		for (j=0; j<i; j++)
			printf("*");
		for (j=0; j<5-i; j++)
			printf(" ");
		printf(" ");
		for (j=0; j<5-i; j++)
			printf(" ");
		for (j=0; j<i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}