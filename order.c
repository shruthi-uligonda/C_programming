#include<stdio.h>
#include<stdlib.h>
int main()
{
    int option1,option2,q1,q2,q3,q4,total_amount=0;
    int sandwich_price=0,pizza_price=0,burger_price=0,fries_price=0;
    start:
    printf("******Menu*******");
    printf("\nEnter 1 for Sandwich(200)");
    printf("\nEnter 2 for pizza(150)");
    printf("\nEnter 3 for Burger(100)");
    printf("\nEnter 4 for fries(50):");
    scanf("\n%d",&option1);
    switch(option1){
        case 1:{
            printf("\nEnter the quantity=");
            scanf("%d",&q1);
            sandwich_price=q1*200;
            printf("\nThe price of sandwich(s) are:%d",sandwich_price);
            break;
        }
        case 2:{
            printf("\nEnter the quantity=");
            scanf("%d",&q2);
            pizza_price=2*150;
            printf("\nThe price of pizza(s) are:%d",pizza_price);
            break;
        }
        case 3:{
            printf("\nEnter the quantity=");
            scanf("%d",&q3);
            burger_price=q3*100;
            printf("\nThe price of burger(s) are:%d",burger_price);
            break;
        }
        case 4:{
            printf("\nEnter the quantity=");
            scanf("%d",&q4);
            fries_price=q4*50;
            printf("\nThe price of frie(s) are:%d",fries_price);
            break;
        }
        default:{
            printf("\nInvalid input");
            break;
        }
    }
    int number;
    while(1){
        printf("\nEnter 1 for reorder and 0 for stop ordering");
        scanf("%d",&number);
        if(number==1)
        goto start;
        else
        break;
    }
    total_amount=(sandwich_price)+(pizza_price)+(fries_price)+(burger_price);
    int cd,type,discount,method,cvv;
    printf("\n***payment options***");
    printf("\nEnter 1 for Debit card");
    printf("\nEnter 2 for credit card");
    printf("\nEnter 3 for UPI");
    printf("\nEnter 4 for COD:");
    scanf("\n%d",&option2);
    switch(option2){
        case 1:{
            printf("\nEnter debit card number:");
            scanf("%d",&cd);
            printf("\nEnter you CVV number");
            scanf("%d",&cvv);
            printf("\nEnter which type of card you have:");
            printf("\nEnter 1 for platinum");
            printf("\nEnter 2 for gold:");
            scanf("%d",&type);
            switch(type){
                case 1:{
                    printf("\nYou have 15 percentage discount");
                    if(total_amount>1000)
                        discount=total_amount-(total_amount*15/100);
                        else{
                            discount=total_amount;
                        }
                        printf("\nThe bill for your order is:%d",discount);
                        break;
                }
                case 2:{
                    printf("\nYou have 10 percentage dicount");
                    if(total_amount>1000)
                    discount=total_amount-(total_amount*10/100);
                    else{
                        discount=total_amount;
                    }
                    printf("\nThe Bill for your order is:%d",discount);
                    break;
                }
            }
            break;
        } 
        case 2:{
            printf("\nYou have 10 percentage discount");
            if(total_amount>1000){
                discount=total_amount-(total_amount*10/100);
            }
            else{
                discount=total_amount;
            }
            printf("\nThe Bill for your order is:%d",discount);
            break;
        }
        case 3:{
            printf("\nEnter your UPI method");
            printf("\nEnter 1 for Gpay:");
            printf("\nEnter 2 for Phone pay:");
            scanf("%d",&method);
            switch(method){
                case 1:{
                    printf("\nYou have 5 percent discount");
                    if(total_amount>1000){
                        discount=total_amount-(total_amount*5/100);
                    }
                    else{
                        discount=total_amount;
                    }
                    printf("\nThe bill for your order is:%d",discount);
                    break;
                }
                case 2:{
                    printf("\nyou have 3 percent discount");
                    if(total_amount>1000){
                        discount=total_amount-(total_amount*3/100);
                    }
                    else{
                        discount=total_amount;
                    }
                    printf("\nThe bill for your order is:%d",discount);
                    break;
                }
            }
            break;
        }
        case 4:{
            printf("\nYou Have no dicount with COD option");
            discount=total_amount;
            printf("\nThe bill for your order is:%d",discount);
            break;
        }
        
    }
    printf("\nHURRY!!! your order is completed");
    return 0;
}