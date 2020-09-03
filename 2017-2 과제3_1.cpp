#include <stdio.h>

int main(void)
{
	int i, j;
	int temp;
	int arr[10];

	for (i=0; i<10; i++)
	{
		scanf("%d",&temp);
		arr[i] = temp;
	}

	for (i=0; i<10; i++)
	{
		for (j=i+1; j<10; j++)
			if (arr[i] == arr[j])
				break;
		if (j == 10)
		{
			printf("%d",arr[i]);
			if (i != 9)
				printf(" ");
		}
	}

	return 0;
}