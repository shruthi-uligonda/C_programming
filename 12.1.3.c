#include<stdio.h>
/*void word(void);
void main()
{
    word();
}
void word()
{
    char string[20];
    int i;
    printf("\nEnter the string:");
    scanf("%[^.\n]s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        string[i]-=32;
    }
    printf("%s",string);
}*/


/*char toUppercaseVowels(char string[]);
int main()
{
    char string[20];
    printf("Enter the string: ");
    scanf("%[^\n]s", string);
    toUppercaseVowels(string);
    printf("The string is: %s\n", string);
    return 0;
}
char toUppercaseVowels(char string[])
{
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        string[i] -= 32;
    }
}*/


/*void word(char string[20]);
int main()
{
    char string[20];
    printf("\nEnter the string:");
    scanf("%[^.\n]s",string);
    word(string);
}
void word(char string[20])
{
    int i;
    char string1[20];
    for(i = 0; string[i] != '\0'; i++)
    {
        string1[i] = string[i];
    }
    for(i=0;string1[i]!='\0';i++)
    {
        if(string1[i]=='a'||string1[i]=='e'||string1[i]=='i'||string1[i]=='o'||string1[i]=='u')
        string1[i]-=32;
    }
    printf("\nThe string is:%s",string1);
}*/


char word(void);
charmain()
{
    word();
    printf("\nThe fac is:%d",word());
}
char word()
{
    int i;
    char string[20];
    printf("\nEnter the string:");
    scanf("%[^.\n]s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string1[i]=='a'||string1[i]=='e'||string1[i]=='i'||string1[i]=='o'||string1[i]=='u')
        string1[i]-=32;
    }
    return string1;
}