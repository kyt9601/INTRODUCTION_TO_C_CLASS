#include <stdio.h>

void replace(char A[], char ch);

int main()
{
	char A[80];
	char ch;

	scanf("%c ",&ch);
	gets(A);

	replace(A, ch);

	puts(A);

	return 0;
}

void replace(char A[], char ch)
{
	for (int i=0; A[i]; i++)
		if (A[i] == ' ')
			A[i] = ch;
}