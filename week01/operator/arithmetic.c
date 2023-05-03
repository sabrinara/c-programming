#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum,minus,mult,mod;
    float div;
    sum=a+b;
    minus=a-b;
    mult=a*b;
    div= b/a; //a/b
    mod=b%a;
    printf(" add=%d\n minus=%d\n mult=%d\n div=%0.2f\n mod=%d\n",sum,minus,mult,div,mod);

    return 0;
}