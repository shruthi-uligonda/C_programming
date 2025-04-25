#include<stdio.h>
int strong(int);
int main()
{
    int n1,sum1;
    printf("\nEnter the number");
    scanf("%d",&n1);
    sum1=strong(n1);
    if(sum1==n1) printf("\nIts is strong");
    else printf("\nNot a strong number");
}
int strong(int m)
{
    int n1,i,fac=1,temp,sum=0;
    temp=n1;
    while(temp>0)
    {
        temp%=10;
        fac=1;
        for(i=1;i<=temp;i++)
        {
            fac*=i;
        }
        sum+=fac;
        temp/=10;
    }
    return sum;
}