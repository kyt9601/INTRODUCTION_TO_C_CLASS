#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	int l;

	scanf("%d",&n);

	l = 1;
	t = 1;
	while (t <= n)
	{
		t *= 2;
		l++;
	}
	l--;

	for (i=0; i<l; i++)
	{
		t = 1;
		while (t <= n)
			t *= 2;
		t /= 2;
		n -= t;

		if (t)
			printf("1");
		else
			printf("0");
	}

	return 0;
}