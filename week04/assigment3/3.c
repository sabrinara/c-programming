#include <stdio.h>
int count_before_zero(int arr[], int N)
{
    int count = 0,i;
    for(i=0;i<N;i++)
    {
        if (arr[i] != 0)
        {
            count++;
        }
        else
            break;
    }
    return count;
}

int main()
{
    int N,i;
    scanf("%d\n", &N);
    int arr[N],sum=0;
    for (i=0;i<N; i++)
        scanf("%d", &arr[i]);
    sum=count_before_zero(arr,N);
    printf("%d\n",sum);
    return 0;
}
