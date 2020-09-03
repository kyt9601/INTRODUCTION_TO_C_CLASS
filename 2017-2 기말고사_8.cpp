#include <stdio.h>
#include <string.h>

void reversePrint(char A[]);

int main()
{
	char str[80];

	gets(str);
	reversePrint(str);

	return 0;
}

void reversePrint(char A[])
{
	int str_len = strlen(A);

	for (int i=str_len-1; 0<=i; i--)
		printf("%c", A[i]);
}