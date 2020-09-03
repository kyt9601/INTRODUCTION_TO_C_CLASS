#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int arr[10];
	int idx;

	for (i=0; i<10; i++)
	{
		scanf("%d",&t);
		arr[i] = t;
	}

	for (i=0; i<10; i++)
	{
		idx = i;
		for (j=i+1; j<10; j++)
		{
			if (arr[i] == arr[j])
			{
				idx = j;
				break;
			}
		}

		if (idx == i)
		{
			printf("%d",arr[idx]);
			if (i < 9)
			{
				printf(" ");
			}
		}
	}

	return 0;
}