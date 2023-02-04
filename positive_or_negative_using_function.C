#include<stdio.h>
#include<conio.h>
void function(void);
int main(){
    function();
    return 0;
}
void function(void){
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    if (number < 0)
    {
        printf("NEGATIVE");
    }
    else
    {
        printf("POSITIVE ");
    }
}