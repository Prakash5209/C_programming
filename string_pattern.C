#include<stdio.h>
#include<conio.h>
int main()
{
    // char name[10] = "kathmandu";
    // for(int i = 0;i < 10;i++)
    // {
    //     printf("%c\n",name[i]);
    //}
    int a,b;
    for(a = 0;a < 5;a++){
        for(b = 0;b < a;b++){
            printf("%d",b);
        }
        printf("\n");
    } 
    return 0;
}