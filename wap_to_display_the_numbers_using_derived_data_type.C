#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i;
    printf("enter the elements\n");
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of array are :\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t\n",a[i]);
    }
    return 0;
}