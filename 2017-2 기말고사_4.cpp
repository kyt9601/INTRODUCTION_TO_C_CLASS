#include <stdio.h>

int main()
{
	int i, j;
	int arr[10];

	for (i=0; i<10; i++)
		scanf("%d",arr+i);

	for (i=0; i<10; i++)
	{
		for (j=0; j<i; j++)
			if (arr[i] == arr[j])
				break;
		if (i == j)
		{
			printf("%d",arr[i]);
			if (i != 9)
				printf(" ");
		}
	}

	return 0;
}