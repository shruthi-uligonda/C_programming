#include<stdio.h>
void div(void);
void main()
{
    div();
}
void div()
{
    int n1=100,n2=200,i,sum=0,count=0;
    for(i=100;i<=n2;i++)
    {
        if(i%9==0) 
        {
            count++;
            sum+=i;
        }
    }
    printf("%d",sum);
    printf("\n%d",count);
}

