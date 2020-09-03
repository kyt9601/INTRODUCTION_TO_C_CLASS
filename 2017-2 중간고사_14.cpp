#include <stdio.h>

int main(void)
{
	int k, e, m;
	int kr, er, mr;
	int count2 = 0, count3 = 0;
	int set;

	scanf("%d%d%d",&k,&e,&m);

	if (90 <= k)
		kr = 1;
	else if (85 <= k)
		kr = 2;
	else if (80 <= k)
		kr = 3;
	else
		kr = 4;

	if (95 <= e)
		er = 1;
	else if (90 <= e)
		er = 2;
	else if (80 <= e)
		er = 3;
	else
		er = 4;

	if (80 <= m)
		mr = 1;
	else if (75 <= m)
		mr = 2;
	else if (60 <= m)
		mr = 3;
	else
		mr = 4;

	if (kr <= 3)
	{
		count3++;

		if (kr <= 2)
			count2++;
	}

	if (er <= 3)
	{
		count3++;
	
		if (er <= 2)
			count2++;
	}

	if (mr <= 3)
	{
		count3++;
	
		if (mr <= 2)
			count2++;
	}

	printf("%d %d %d = ",kr,er,mr);

	if ( count2>=2 || count3>=3 )
		printf("P");
	else
		printf("NP");

	return 0;
}