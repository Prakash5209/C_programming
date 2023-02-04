#include<stdio.h>
#include<conio.h>
int main()
{
    char name[10];
    int age;
    FILE*ptr;
    ptr = fopen("data.txt","w");
    printf("\nenter your name: ");
    gets(name);
    printf("\nenter your age: ");
    scanf("%d",&age);
    fprintf(ptr,"name: %s\nage: %d",name,age);
    fclose(ptr);
    return 0;
}