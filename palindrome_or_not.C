#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,sum = 0,temp;
    printf("enter the number: ");
    scanf("%d",&n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    n = temp;
    if (n == sum)
    {
        printf("this is palindrome number\n");
    }
    else
    {
        printf("this is not palindrome number\n");
    }
    return 0;
}