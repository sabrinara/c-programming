#include <stdio.h>
int main()
{
    int N,i,j,k;
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    { 
        for(j=1;j<=(N-i);j++)
        {
            printf(" ");
        }
        for(k =1;k<=(2*i-1);k++)
        {
            printf("%d",k);
        } 
        printf("\n");
    }
    for(i=N-1;i>=1;i--)
    {
        for(j=1;j<N-i+1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
