#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],smallest,i;
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest = a[0];
    for(i = 0;i < 5;i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("the smallest number: %d\n",smallest);
    return 0;
}