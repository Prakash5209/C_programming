#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[10];
    char address[20];
    long phone[30];
};
int main()
{
    struct student std;
    {
        char ch = 'y';
        FILE*fp;
        fp = fopen("student_data_entry.txt","W");
        while (ch == 'y' || ch == 'Y')
        {
            printf("\nenter roll number\n");
            scanf("%d",&std.roll);
            printf("\nenter the name\n");
            scanf("%s",std.name);
            printf("\nenter the address\n");
            scanf("%s",std.address);
            printf("\nenter the phone number\n");
            scanf("%s",std.phone);
            fprintf(fp,"%d\t%s\t%s\t%s\n",std.roll,std.name,std.address,std.phone);
            printf("do you want to continue (Y/N) ? ");
            ch = getch();
            return 0;
        }
        fclose(fp);
        fp = fopen("student_data_entry.txt","r");
        printf("\nRoll\tName\tAddress\tPhone\n");
        while (fscanf(fp,"%d%s%s%s",&std.roll,std.name,std.address,std.phone)!=EOF)
        {
            printf("%d\t%s\t%s\t%s\n",std.roll,std.name,std.address,std.phone);
        }  
        fclose(fp);
        getch()
    };
}