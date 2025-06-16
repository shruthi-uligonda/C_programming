#include<stdio.h>
int main()
{
    int number,i,d,f,sum=0,temp;
    printf(" ");
    scanf("%d",&number);
    temp=number;
    while(temp!=0){
        d=temp%10;
        f=1;
        for(i=1;i<=d;i++){
            f*=i;
        }
        sum+=f;
        temp/=10;
    }
    if(sum==number)
    printf("Strong number");
    else
    printf("Not a strong number");
    return 0;
}
