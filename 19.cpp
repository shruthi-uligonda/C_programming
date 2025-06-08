#include<stdio.h>
int main()
{
    int units,i=1;
    float charges,total_price;
    printf(" ");
    scanf("%d",&units);
        if(units>0&&units<=100){
            charges=units*1.50;
            total_price=charges+50;
        }
        else if(units>100&&units<=300){
            charges=units+(units-100)*2.50;
            total_price=charges+50;
        }
        else if(units>300){
            charges=100*1.50+200*2.50+(units-300)*3.50;
            total_price=charges+50;
        }
        printf("Electricity Bill: %.2f",total_price);
    return 0;
    
}
