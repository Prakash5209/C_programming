#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],temp,i,j;
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 5;i++)
    {
        for(j = i;j < 5;j++)
        {
            if(a[i] > a[j])   // a[i] < b[j] is for descending order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;    
            }
        }
    }
    for(i = 0;i < 5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}