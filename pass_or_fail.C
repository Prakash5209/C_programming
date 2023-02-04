#include<stdio.h>
#include<conio.h>
#define MAX 100
int main(){
    int i,pc = 0,fc = 0;
    float m[MAX];
    printf("\nenter 5 student's marks\n");
    for(i = 0;i < 5;i++){
        scanf("%f",&m[i]);
    }
    for(i = 0;i < 5;i++){
        if(m[i] >= 35){
            pc = pc + 1;
        }
        else if (m[i]<35)
        {
            fc = fc + 1;
        }
    }
    printf("the pass students are %d\n",pc);
    printf("the fail students are %d\n",fc);
    return 0;
}   