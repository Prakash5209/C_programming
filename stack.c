#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 4

int top = -1,item,stack[MAXSIZE];


void insertItem();
void showItem();
void popItem();
int main(){
    printf("1 insert the item into stack\n2 show all element\n3 deletion the element from stack\n4 terminate\n");
    while(1){
        printf("enter the operation: ");
        scanf("%d",&item);
        switch(item){
            case 1:
                insertItem();
                break;
            case 2:
                showItem();
                break;
            case 3:
                popItem();
                break;
            case 4:
                printf("program is terminated\n");
                exit(0);
        }
    }
    return 0;
}

void insertItem(){
    if(top == MAXSIZE-1){
        printf("stack is full\n");
    }else{
        printf("enter a item to insert in stack: ");
        scanf("%d",&item);
        top += 1;
        stack[top] = item;
    }
}

void showItem(){
    if(top == -1){
        printf("stack is empty\n");
    }else{
        for(int i = 0;i <= top;i++){
            printf("%d\n",stack[i]);
        }
    }
}

void popItem(){
    if(top == -1){
        printf("nothing to pop\n");
    }else{
        top = top - 1;
        printf("poped item: %d\n",stack[top + 1]);
    }
}