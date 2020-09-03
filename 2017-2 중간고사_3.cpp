#include <stdio.h>

int main(void)
{
	int n1, n2;
	char op;

	scanf("%d%c%d",&n1,&op,&n2);

	printf("%d",(op=='+' ? n1+n2 : n1-n2));

	return 0;
}