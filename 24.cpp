#include<stdio.h>
int main()
{
    int i=1,sum=0,num;
    printf(" ");
    scanf("%d",&num);
    while(i<num){
        if(num%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(num<0){
        printf("Invalid input");
    }
    else if(sum==num){
        printf("\nPerfect Number");
    }
    else{
        printf("\nNot a Perfect Number");
    }
}
