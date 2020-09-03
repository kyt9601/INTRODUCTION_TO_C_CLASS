#include <stdio.h>

void change(int *px, int *py, int *pz);

int main(void)
{
	int x, y, z;

	scanf("%d%d%d", &x, &y, &z);

	change(&x, &y, &z);

	printf("%d %d %d", x, y, z);

	return 0;
}

void change(int *px, int *py, int *pz)
{
	int t = *px;

	*px = *pz;
	*pz = *py;
	*py = t;
}