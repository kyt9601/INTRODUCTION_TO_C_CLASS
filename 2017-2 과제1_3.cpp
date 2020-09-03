#include <stdio.h>

int main()
{
    int height, weight;
    
    scanf("%d %d",&height,&weight);
    
    printf("%.2f",(float)weight / (((float)height/100) * ((float)height/100)));

	return 0;
}