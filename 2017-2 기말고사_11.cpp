#include <stdio.h>

int main()
{
	char str[100];
	int str_len;

	gets(str);

	for (str_len=0; str[str_len]; str_len++);
	printf("%d ", str_len);

	for (int i=str_len-1; 0<=i; i--)
		printf("%c",str[i]);

	return 0;
}