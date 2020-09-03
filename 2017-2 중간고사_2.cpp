#include <stdio.h>

int main(void)
{
	double d1, d2;
	int pcnt;

	scanf("%lf%lf",&d1,&d2);

	printf("%d%%\n",(int)(d1/d2*100));

	return 0;
}