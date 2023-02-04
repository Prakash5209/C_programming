#include<stdio.h>
int main()
{
    int i, n, reverse , remainder;
    printf("Palindrome number from 1 to 100\n");
    for (i = 1; i <= 100; i++)
    {
        reverse = 0;
        n = i;
        // while (n != 0)
        for( ; n != 0;)
        {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n = n / 10;
        }
        if (i == reverse)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}
