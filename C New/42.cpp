#include<stdio.h>
int main()
{
    float num;
    printf(" ");
    scanf("%f",&num);
    if(num>0 &&(int)num%2==0){
        if(num/1000<500)
        printf("Even number but not greater than 500");
        else 
        printf("Even number and greater than 500");
    }else{
        if(num>0&&(int)num%2!=0){
            if(num/1000<500)
            printf("Odd number but not greater than 500");
            else
            printf("Odd number and greater than 500");
        }
    }
    if(num<0){
        printf("ERROR");
    }
    return 0;
}
            
    

