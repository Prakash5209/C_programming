#include<stdio.h>
#include<conio.h>
struct function
{
    float marks[30];
};
int main()
{   
    int i;
    float sum = 0;
    struct function addition;
    {
        printf("enter the 5 numbers\n");
        for ( i = 0; i <=5 ; i++)
        {
            scanf("%f",&addition.marks[i]);
            sum = sum + addition.marks[i];
        }
        printf("the sum is %f",sum);
    };
    
    return 0;
}