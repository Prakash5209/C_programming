#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 4

int top = 0,arry[SIZE];

int main(){
    int n;
    int item;
    while(1){
        printf("1 insert the item into stack\n2 deletion the element from stack\n3 show all element\n4 terminate\n");
        printf(": ");
        scanf("%d",&n); 
        switch(n){
            case 1:
                if(top == SIZE){
                    printf("stack is full\n");
                }else{
                    printf("enter a element:");
                    scanf("%d",&item);
                    arry[top] = item;
                    top += 1;
                }
                break;
            case 2:
                if(top == 0){
                    printf("stack is empty\n");
                }else{
                    printf("poped item: %d",arry[top-1]);
                    top = top - 1;
                }
                break;

            case 3:
                if(top == 0){
                    printf("stack is empty\n");
                }else{
                    for(int i = top - 1;i >= 0;i--){
                        printf("%d\n",arry[i]);
                    }
                }
                break;

            case 4:
                exit(0);

            default:
                printf("plz enter the corrrect opeartion\n");
                break;
            }
        printf("\n");
    }
    return 0;
}