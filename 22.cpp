#include<stdio.h>
int main()
{
    int i=1,num,count=0;
    printf(" ");
    scanf("%d",&num);
    while(i<=num&&num>0){
        if(num%i==0)
        count++;
        i++;
    }
    if(num<0){
        printf("Invalid input");
        
    }
    else if(count==2){
        printf("Prime");
        
    }
    else{
        printf("Not a prime");
    }
}

