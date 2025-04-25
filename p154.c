#include<stdio.h>
int main()
{
    char *str="Hello";
    //char *ptr=str;
    while(*str!='\0')
    {
        printf("%c",*str);
        str++;
    }
    return 0;
}