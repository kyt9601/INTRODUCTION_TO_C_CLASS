#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d",&n);

	n = (0<=n ? n : -n);

	if (85<=n && n<=100)
		printf("very good");
	else if (60 <= n)
		printf("good");
	else
		printf("?!?");

	return 0;
}