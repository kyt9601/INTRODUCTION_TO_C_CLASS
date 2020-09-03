#include <stdio.h>

int main(void)
{
	int t, i, j;
	int n, m;

	scanf("%d%d",&n,&m);

	if (n > m)
	{
		t = n;
		n = m;
		m = t;
	}

	if (n*n == m)
		printf("%d*%d=%d",n,n,m);
	else
		printf("none");

	return 0;
}