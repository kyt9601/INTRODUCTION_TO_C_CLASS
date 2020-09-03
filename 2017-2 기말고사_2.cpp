#include<stdio.h>

int main(){

    int n;
    int cnt = 0;
    
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++)
    {
        if (i%2 && i%3)
            cnt++;
    }
    
    printf("%d", cnt);

	return 0;
}