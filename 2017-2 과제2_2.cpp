#include <stdio.h>

int main(void)
{
	int temp = 1, i;
	int sum = 0, count = 0;

	while (0 < temp)
	{
		scanf("%d",&temp);

		if (0<temp && temp<=100)
		{
			sum += temp;
			count++;
		}
	}

	printf("%d %.2f %d",sum,(float)sum/count,count);

	return 0;
}