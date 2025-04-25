#include<stdio.h>
struct complex
{
    int real;
    float imaginary;
}s[3];
void fun_complex(struct complex *ptr,int size)
{
    int sum=0;
    for(size=0;size<3;size++)
    {
        printf("real:%d  ",ptr[size].real);
        printf("imaginary:%.1f\n",ptr[size].imaginary);
        sum+=ptr[size].real-(ptr[size].imaginary);
    }
    printf("\nsum:%d",sum);
}
void main()
{
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("\nEnter a and b values:\n");
        scanf("%d %f",&s[i].real,&s[i].imaginary);
    }
    fun_complex(s,3);
}