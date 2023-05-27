#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=10000){printf("Gucci Bag\n");} 
    else if(n>=5000 && n<10000){printf("Levis Bag\n");}
    else {printf("Something\n");}
}