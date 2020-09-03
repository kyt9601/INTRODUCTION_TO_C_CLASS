#include <stdio.h>

int main()
{
	int cnt = 0;
	int iMax = 0, jMax = 0, hMax = 0;

	for (int i=0; i<=4; i++)
		for (int j=0; j<=5; j++)
			for (int h=0; h<=16; h++)
				if ((i*900) + (j*750) + (h*200) == 3150)
				{
					cnt++;

					if (hMax < h)
					{
						iMax = i;
						jMax = j;
						hMax = h;
					}
				}

	printf("%d\n",cnt);
	printf("%d\n",iMax+1);
	printf("%d\n",jMax+1);
	printf("%d\n",hMax+1);

	return 0;
}