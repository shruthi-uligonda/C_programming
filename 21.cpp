#include<stdio.h>
int main()
{
    int remainder,number,reverse=0,temp;
    printf(" ");
    scanf("%d",&number);
    temp=number;
    if(number>0){
        while(number>0){
            remainder=number%10;
            reverse=remainder+reverse*10;
            number/=10;
        }
        if(reverse==temp)
        printf("\nAccess Granted");
        else
        printf("\nAccess Denied");
    }
    else
    printf("\nInvalid Input");
    return 0;
}
