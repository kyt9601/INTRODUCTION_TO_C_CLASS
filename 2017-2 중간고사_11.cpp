#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int arr[4];
	int min, max;
	int t;
	int temp;

	for (i=0; i<4; i++)
	{
		scanf("%d",&n);
		arr[i] = n;
	}


	for (i=0; i<3; i++)
	{
		t = i;
		for (j=i+1; j<4; j++)
		{
			if (arr[j] < arr[t])
				t = j;
		}
		temp = arr[i];
		arr[i] = arr[t];
		arr[t] = temp;
	}

	min = arr[0]*1000 + arr[1]*100 + arr[2]*10 + arr[3];
	max = arr[3]*1000 + arr[2]*100 + arr[1]*10 + arr[0];

	printf("min = %d\n",min);
	printf("max = %d\n",max);
	printf("%d",max-min);

	return 0;
}