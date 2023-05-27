#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    int sum,minus,mult,mod;
    float div;
    sum=a+b;
    minus=a-b;
    mult=a*b;
    if(a>b)
    {
       div=a/b; 
    }
    else
    {
            div= b/a; //a/b
    }

    printf(" %d+%d=%d\n %d-%d=%d\n %d*%d=%d\n %d/%d=%0.2f\n ",a,b,sum,a,b,minus,a,b,mult,a,b,div);
    return 0;
}