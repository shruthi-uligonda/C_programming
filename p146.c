#include<stdio.h>
int main()
{
    char ch='a',*p1=&ch,**p2=&p1,***p3=&p2;
    printf("\nCh=%c",ch);
    printf("\nCh=%c",*p1);
    printf("\nCh=%c",**p2);
    printf("\nCh=%c",***p3);
    ***p3='?';
    printf("\nCh=%c",***p3);
}