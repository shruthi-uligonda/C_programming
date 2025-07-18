#include<stdio.h>
int main()
{
    int number,remainder,reverse=0,temp;
    printf(" ");
    scanf("%d",&number);
    if(number>0){
        while(number>0){
            remainder=number%10;
            number=number/10;
            reverse=remainder+reverse*10;
        }
        printf("%d",reverse);
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}
