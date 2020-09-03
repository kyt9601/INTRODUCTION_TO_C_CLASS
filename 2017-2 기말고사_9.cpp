#include <stdio.h>

void printLine(int x, int y);

int main()
{
	int n;
	
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		printLine(n-i , i*2-1);
		printf("\n");
	}

	return 0;
}

void printLine(int x, int y)
{
	for (int i=0; i<x; i++)
		printf(" ");
	for (int i=0; i<y; i++)
		printf("*");
}