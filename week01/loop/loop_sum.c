#include<stdio.h>
int main()
{
    long long int sum=0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%lld",sum);
    return 0;
}