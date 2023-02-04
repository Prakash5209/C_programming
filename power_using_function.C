#include<stdio.h>
#include<conio.h>
#include<math.h>
void power(void);
int main()
{
    power();
    return 0;
}
void power(void)
{
    int i,j,result;
    printf("enter base and power\n");
    scanf("%d%d",&i,&j);
    result = pow(i,j);
    printf("the power of base is %d",result);
}