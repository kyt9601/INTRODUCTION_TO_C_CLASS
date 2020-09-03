#include <stdio.h>

void reverseArray(int source[]);

int main(void)
{
	int i;
	int temp;
	int arr[10];

	for (i=0; i<10; i++)
	{
		scanf("%d",&temp);
		arr[i] = temp;
	}

	reverseArray(arr);

	for (i=0; i<10; i++)
	{
		printf("%d",arr[i]);
		if (i != 9)
			printf(" ");
	}

	return 0;
}

void reverseArray(int source[])
{
	int i;
	int temp;

	for (i=0; i<5; i++)
	{
		temp = source[i];
		source[i] = source[9-i];
		source[9-i] = temp;
	}
}