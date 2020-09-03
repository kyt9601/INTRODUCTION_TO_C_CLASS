#include <stdio.h>

int main()
{
    int sum;
    char str[50];
    
    scanf("%s",str);
    
    sum = str[0] - '0';
    
    for (int i=1; i<=9; i+=2)
    {
        if (str[i] == '+')
            sum += (str[i+1] - '0');
        else
            sum -= (str[i+1] - '0');
    }
    
    printf("%d", sum);
    
    return 0;
}