#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i_num;
    printf("\n Enter an integer:");
    scanf("%d",&i_num);
    if(i_num==0){
        printf("\n Invalid input");
        exit(0);
    }
    if(i_num>0)
    {
        if(i_num%2==0)
        printf("\n Given number is positive even ");
        else
        printf("\n Given number is positive odd");
    }
    else{
        if(i_num%2==0)
        printf("\n Given number is negative even");
        else
        printf("\n Given number is negative odd");
    }
    return 0;
}

