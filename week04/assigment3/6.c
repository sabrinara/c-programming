// Call by value
#include <stdio.h>
void change(int a, int b)
{
    a = 7 ;
    b = 5;
}

int main()
{
    int a = 5, b = 7;
    printf("before change: a = %d and b = %d \n", a, b);
    change(a, b);
    printf("after change: a = %d and b = %d\n", a, b);
}
