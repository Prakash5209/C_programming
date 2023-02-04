#include<stdio.h>
#include<conio.h>
struct structure{
    char name[5][15];
    int age[5];
    char sex[5][6];
};
int main(){
    printf("Name\tage\tsex\n");
    struct structure student;{
        for(int l = 0;l < 5;l++){
            scanf("%s",student.name[l]);
            scanf("%d",&student.age[l]);
            scanf("%s",student.sex[l]);
        }
    }
    printf("Name\t\tage\tsex\n");
    for(int l = 0;l < 5;l++){
        printf("%s\t\t%d\t%s\n",student.name[l],student.age[l],student.sex[l]);
    }
    printf("\n");
    return 0;
}