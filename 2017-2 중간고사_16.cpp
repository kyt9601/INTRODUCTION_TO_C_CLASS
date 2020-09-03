#include <stdio.h>

int main(void)
{
	int i, j, h;
	char str[5];
	char ch;
	char temp;

	for (i=0; i<5; i++)
	{
		scanf("%c",&ch);
		str[i] = ch;
	}

	for (h=0; h<5; h++)
		printf("%c",str[h]);
	printf("\n");

	for (i=0; i<4; i++)
	{
		temp = str[4];
		for (j=4; 0<j; j--)
			str[j] = str[j-1];
		str[0] = temp;

		for (h=0; h<5; h++)
			printf("%c",str[h]);
		printf("\n");
	}

	printf("\n");

	temp = str[4];
	for (j=4; 0<j; j--)
		str[j] = str[j-1];
	str[0] = temp;

	for (h=0; h<5; h++)
		printf("%c",str[h]);
	printf("\n");

	for (i=0; i<4; i++)
	{
		temp = str[0];
		for (j=0; j<4; j++)
			str[j] = str[j+1];
		str[4] = temp;

		for (h=0; h<5; h++)
			printf("%c",str[h]);
		printf("\n");
	}

	return 0;
}