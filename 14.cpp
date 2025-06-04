#include<stdio.h>
int main()
{
    int distance,weight,charges;
    printf("\n ");
    scanf("\n %d",&distance);
    
    printf("\n ");
    scanf("\n %d",&weight);
    
    if(distance>=500 && weight>=100){
        charges=distance*5;
    }else if(distance>=500 && weight>=10&& weight<100){
        charges=distance*6;
    }else if(distance>=500 && weight<10){
        charges=distance*7;
    }else if(distance<500 && weight>=100){
        charges=distance*8;
    }else if(distance<500&& weight<100){
        charges=distance*5;
    }
    
    printf("\n %.1d",charges);
    return 0;
}
