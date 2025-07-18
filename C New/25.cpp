#include<stdio.h>
#include<math.h>
int main()
{
    int rem,sum=0,temp,temp1,dc=0,num;
    printf(" ");
    scanf("%d",&num);
    temp1=temp=num;
    while(temp1>0){
        rem=temp%10;
        dc++;
        temp1/=10;
        
    }
    if(num>0){
        while(num>0){
            rem=num%10;
            sum+=pow(rem,dc);
            num/=10;
        }
        if(sum==temp)
        printf("\nTrue");
        else
        printf("\nFalse");
    }
    else
    printf("\nInvalid Input");
    return 0;
}
