#include<stdio.h>
int main()
{
    int var=100,*ptr_var;
    ptr_var=&var;
    *ptr_var+=500;
    printf("\nValue of variable=%d",*ptr_var);
    printf("\nAddress of variable=%d",&var);
    printf("\nvalue of pointer=%d",ptr_var);
    printf("\nAddress of pointer variable=%d",&ptr_var);
}