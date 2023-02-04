#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp;
    printf("enter the cp\n");
    scanf("%d",&cp);
    printf("enter the sp\n");
    scanf("%d",&sp);
    if(sp > cp)
    {
        printf("there is profit %d\n",sp - cp);
    }
    else
    {
        printf("there is loss %d\n",cp - sp);
    }
    return 0;
}