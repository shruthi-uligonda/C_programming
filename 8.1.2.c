#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("\nEnter the first number:");
    scanf("%d",&n1);
    printf("\nEnter the second number:");
    scanf("%d",&n2);
    int sum=0,n3;
    if(n1>n2){
        n3=n1;
        n1=n2;
        n2=n3;
    }
    if(n1<0&&n2<0){
        for(i=n1;i>=n2;i--){
            sum+=i;
        }
    }
    if(n1>0&&n2<0){
        for(i=n1;i<=n2;i++){
            sum+=i;
        }
    }
    for(i=n1;i<=n2;i++){
        sum+=i;
    }
    printf("\nThe sum between %d and %d is:%d",n1,n2,sum);
    return 0;
}

