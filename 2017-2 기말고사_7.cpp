#include <stdio.h>

int quotient(int a, int b);

int main()
{
	int x, y;

	scanf("%d %d",&x, &y);

	printf("%d", quotient(x,y));

	return 0;
}

int quotient(int a, int b)
{
	int cnt;

	for (cnt=0; b<=a; a-=b, cnt++);

	return cnt;
}