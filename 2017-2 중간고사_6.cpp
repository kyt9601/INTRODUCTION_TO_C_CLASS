#include <stdio.h>

int main(void)
{
	int i;
	int count = 0;
	char ch;
	char str[7];

	for (i=0; i<7; i++)
	{
		scanf("%c",&ch);
		str[i] = ch;
	}

	for (i=0; i<=4; i++)
	{
		if (str[i]=='c' && str[i+1]=='a' && str[i+2]=='t')
		{
			count++;
		}
	}

	printf("%d",count);

	return 0;
}