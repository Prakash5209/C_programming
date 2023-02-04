#include<stdio.h>
#include<conio.h>
int main()
{
    char text[50];
    int vowels,consonent;
    vowels = consonent = 0;
    printf("enter something\n");
    gets(text);
    for(int i = 0;text[i] != '\0';i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' ||
        text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' ||
         text[i] == 'O' || text[i] == 'U')
        {
            vowels++;
        }
        else if (text[i] == ' ')
        {
            continue;
        }
        else
        {
            consonent++;
        }        
    }
    printf("vowels: %d",vowels);
    printf("\nconsonent: %d",consonent);
    return 0;
}