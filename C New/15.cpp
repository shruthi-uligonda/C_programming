#include<stdio.h>
int main()
{
    int Income,tax;
    printf("\n");
    scanf("\n %d",&Income);
    if(Income<=250000){
      
    }else if(Income>250000 && Income<=500000){
        tax=(Income-250000)*5/100;
       
    }else if(Income>500000 && Income<=1000000){
        tax=(Income-500000)*20/100+12500;
      
    }else if(Income>1000000){
        tax=(Income-1000000)*30/100+52500;
       
    }
    printf("%.1d\n",tax);
    return 0;
}
