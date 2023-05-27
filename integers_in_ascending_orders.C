#include<stdio.h>
#include<conio.h>

void ascending(int a[5]){
    int i,j,temp;
    for(i = 0;i < 5;i++){
        for(j = i;j < 5;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("ascending order\n");
    for(i = 0;i < 5;i++){
        printf("%d\n",a[i]);
    }
}
void descending(int a[5]){
    int i,j,temp;
    for(i = 0;i < 5;i++){
        for(j = i;j < 5;j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("descending output\n");
    for(i = 0;i < 5;i++){
        printf("%d\n",a[i]);
    }
}
int main()
{
    int a[5],temp,i,j;
    printf("enter 5 random number\n");
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }
    ascending(a);
    descending(a);
    // for(i = 0;i < 5;i++)
    // {
    //     for(j = i;j < 5;j++)
    //     {
    //         if(a[i] > a[j])   // a[i] < b[j] is for descending order
    //         {
    //             temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;    
    //         }
    //     }
    // }
    // printf("output\n");
    // for(i = 0;i < 5;i++)
    // {
    //     printf("%d\n",a[i]);
    // }
    return 0;
}