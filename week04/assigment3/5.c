#include <stdio.h>
#include <string.h>


int is_palindrome(char s[])
{
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            return 0;
            break;
        }
    }
    return 1;
}


int main()
{
    char s[20];
    scanf("%s", s);
    int flag = is_palindrome(s);
    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
