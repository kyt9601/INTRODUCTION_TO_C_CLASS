#include <stdio.h>

int main(void)
{
	char ch;

	scanf("%c",&ch);

	if ('A'<=ch && ch<='Z')
	{
		printf("%c %c %d\n",ch,'a'+ch-'A',ch-'A'+1);
	}
	else if ('a'<=ch && ch<='z')
	{
		printf("%c %c %d\n",ch,'A'+ch-'a',ch-'a'+1);
	}
	else if ('0'<=ch && ch<='9')
	{
		printf("%d\n",ch);
	}
	else
	{
		printf("error");
	}

	return 0;
}