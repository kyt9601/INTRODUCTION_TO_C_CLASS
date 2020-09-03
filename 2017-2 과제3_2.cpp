#include <stdio.h>

int main(void)
{
	int i;
	int temp;
	int maxIdx, secondIdx;
	int arr[5];

	maxIdx = 0;
	for (i=0; i<5; i++)
	{
		scanf("%d",&temp);
		arr[i] = temp;

		if (arr[maxIdx] <= arr[i])
			maxIdx = i;
	}

	for (secondIdx=0; secondIdx==maxIdx; secondIdx++);

	for (i=secondIdx+1; i<5; i++)
	{
		if (i != maxIdx)
			if (arr[secondIdx] <= arr[i])
				secondIdx = i;
	}

	printf("%d %d",arr[maxIdx],arr[secondIdx]);

	return 0;
}