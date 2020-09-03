#include <stdio.h>

int main(void)
{
	char c1, c2, c3;
	int n1, n2;

	scanf("%c %c %c",&c1,&c2,&c3);

	n1 = c1 - c2;
	n2 = c1 - c3;

	printf("|%c - %c| = %d\n",c1,c2,(0<=n1 ? n1 : -n1));
	printf("|%c - %c| = %d",c1,c3,(0<=n2 ? n2 : -n2));

	return 0;
}