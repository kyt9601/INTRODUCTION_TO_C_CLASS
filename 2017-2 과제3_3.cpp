#include <stdio.h>

int main()
{
	int i;
	int temp;
	int arr[8];
	int minIdx;
	int t;
	
	for (i=0; i<8; i++)
	{
		scanf("%d",&temp);
		arr[i] = temp;
	}

	minIdx = 0;
	for (i=1; i<8; i++)
		if (arr[i] < arr[minIdx])
			minIdx = i;

	t = arr[0];
	arr[0] = arr[minIdx];
	arr[minIdx] = t;

	for (i=0; i<8; i++)
	{
		printf("%d",arr[i]);
		if (i != 7)
			printf(" ");
	}

	return 0;
}