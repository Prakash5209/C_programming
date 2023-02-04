// wap to enter std.no, name,marks and display 
#include<stdio.h>
#include<conio.h>
int main()
{
    int std_no,marks;
    char name[10];
    FILE*ptr;
    ptr = fopen("ddata.txt","w");
    printf("enter the std.no\n");
    scanf("%d",&std_no);
    printf("enter the name\n");
    scanf("%s",name);
    printf("entr the marks\n");
    scanf("%d",&marks);
    fprintf(ptr,"std.no\tname\tmarks\n");
    fprintf(ptr,"%d\t%s\t%d",std_no,name,marks);
    return 0;
}

//wap to enter std.no,name,marks of 20 student and store them in a file.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int std_no[20],marks[20],i;
//     char name[20][10];
//     FILE*ptr;
//     ptr = fopen("data.txt","w");
//     printf("enter the std.no, name and marks\n");
//     for(i = 0;i < 20;i++)
//     {
//         scanf("%d",&std_no[i]);
//         scanf("%s",name[i]);
//         scanf("%d",&marks[i]);
//     }
//     fprintf(ptr,"std.no\tname\tmarks\n");
//     for(i = 0;i < 20;i++)
//     {
//         fprintf(ptr,"%d\t%s\t%d\n",std_no[i],name[i],marks[i]);
//     }
//     fclose(ptr);
//     return 0;
// }   