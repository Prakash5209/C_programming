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
    if (n % 2 == 0 && n == sum)
    {
        printf("this is even number and palindrome number as well\n");
    }
    else if (n == sum)
    {
        printf("this is palindrome number only\n");
    }
    else
    {
        printf("this is not palindrome nor even number\n");
    }
    return 0;
}
