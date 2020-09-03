#include <stdio.h>

int min(int x, int y, int z);

int main(void)
{
	int L, M, N;

	scanf("%d%d%d",&L,&M,&N);

	printf("%d",min(L,M,N));

	return 0;
}

int min(int x, int y, int z)
{
	return (x>y ? (y>z ? z : y) : (x>z ? z : x));
}