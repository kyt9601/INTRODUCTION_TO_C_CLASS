#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int tmp;
	int cnt = 0;

	scanf("%d",&n);

	for (tmp=1; tmp<=n; tmp*=4, cnt++);
	cnt--;

	printf("%d %.2lf", cnt, sqrt((double)cnt));

	return 0;
}