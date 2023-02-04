#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a,b;
    char name[5][10];
    char temp[10];
    for(int a = 0;a < 5;a++){
        scanf("%s",name[a]);
    }   
    for(a = 0;a < 5;a++){
        for(b = 0;b < 5;b++){
            if (strcmp(name[a],name[b]) < 0)
            {
                strcpy(temp,name[a]);
                strcpy(name[a],name[b]);
                strcpy(name[b],temp);
            }
        }
    }
    printf("output\n\n");
    for(a = 0;a < 5;a++)
    {
        printf("%s\n",name[a]);
    }
    return 0;
}