#include <stdio.h>

void makeSquare(int n);

int main()
{
	int n;

	scanf("%d", &n);

	makeSquare(n);

	return 0;
}

void makeSquare(int n)
{
	for (int i=0; i<n/2; i++)
	{
		for (int j=0; j<i; j++)
			printf("o");
		printf("+");

		for (int j=n-(i+1)*2; 0<j; j--)
			printf("o");
		printf("+");

		for (int j=0; j<i; j++)
			printf("o");

		printf("\n");
	}

	for (int i=0; i<n/2; i++)
		printf("o");
	printf("+");
	for (int i=0; i<n/2; i++)
		printf("o");
	
	printf("\n");

	for (int i=n/2-1; 0<=i; i--)
	{
		for (int j=0; j<i; j++)
			printf("o");
		printf("+");

		for (int j=n-(i+1)*2; 0<j; j--)
			printf("o");
		printf("+");

		for (int j=0; j<i; j++)
			printf("o");

		printf("\n");
	}
}