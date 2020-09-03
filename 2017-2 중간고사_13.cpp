#include <stdio.h>

int main(void)
{
	int i;
	int minIdx;
	int maxIdx;
	double arr[10];
	double d;

	for (i=0; i<10; i++)
	{
		scanf("%lf",&d);
		arr[i] = d;
	}

	maxIdx = 0;
	for (i=1; i<10; i++)
	{
		if (arr[i] > arr[maxIdx])
			maxIdx = i;
	}

	minIdx = 0;
	for (i=1; i<10; i++)
	{
		if (arr[i] < arr[minIdx])
			minIdx = i;
	}

	printf("max = %.6lf, min = %.6lf\n",arr[maxIdx],arr[minIdx]);

	for (i=9; 0<=i; i--)
	{
		printf("%.2lf ",arr[i]);
	}

	return 0;
}