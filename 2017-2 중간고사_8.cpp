#include <stdio.h>

int main(void)
{
	int n1, n2;
	float f1, f2;

	scanf("%f%f",&f1,&f2);

	n1 = (int)f1;
	n2 = (int)f2;

	printf("%.3f",(float)n1 / n2);

	return 0;
}