//1.Has return and parameter
#include<stdio.h>
int mod(int a,int b)
{
    int c,temp=0;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    c=a%b;
    return c;
}

//2.Has Return + No Parameter
int multification()
{
    int a,b,c;
    a=2;
    b=3;
    c=a*b;
    return c;
}
//3.No Return + Parameter
int addition(int a,int b)
{
    int c=a+b;
    //printf("3.No return and parameter:%d\n",c);
}
//4.No Return + No Parameter

void printmsg()
{
    printf("4.No Return and no Parameter\n");
}

int main()
{
    int a,b,m,mul,add;
    scanf("%d %d",&a,&b);
    m=mod(a,b);
    mul=multification();
    add=addition(a,b);
    printf("1.Has return and parameter:%d\n",m);
    printf("2.Has return and no parameter:%d\n",mul);
    printf("3.No return and parameter:%d\n",add);
    printfmsg();
    return 0;
}
