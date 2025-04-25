#include<stdio.h>
int main()
{
    int option1,option2,p_sand=0,q1,q2,q3,q4,q5,p_fries=0,p_burger=0,p_coke=0,p_pizza=0;
    int total_amount1=0,number,cvv,dc,credit,cs,expiry,c_card,upi,card,total_amount2,start1;
    start:
    printf("\n**MENU***");
    printf("\nEnter 1 for sandwich(200)");
    printf("\nEnter 2 for fries(150)");
    printf("\nEnter 3 for burger(100)");
    printf("\nEnter 4 for coke(50)");
    printf("\nEnter 5 for pizza(99)");
    scanf("%d",&option1);
    switch(option1)
    {
        case 1:{
            printf("\nEnter the quantity");
            scanf("%d",&q1);
            p_sand+=(q1*200);
            printf("\nYour total sandwich amount is:%d",p_sand);
            break;
        }
        case 2:{
            printf("\nEnter the quantity");
            scanf("%d",&q2);
            p_fries+=(q2*150);
            printf("\nYour total fries amount is:%d",p_fries);
            break;
        }
        case 3:{
            printf("\nEnter the quantity");
            scanf("%d",&q3);
            p_burger+=(q3*100);
            printf("\nYour total burger amount is:%d",p_burger);
            break;
        }
        case 4:
        {
            printf("\nenter the quantity");
            scanf("%d",&q4);
            p_coke+=(q4*50);
            printf("\nYour coke amount is:%d",p_coke);
            break;
        }
        case 5:{
            printf("\nENter the quantity");
            scanf("%d",&q5);
            p_pizza+=(q5*150);
            printf("\nYour total pizza amount is:%d",p_pizza);
            break;
        }
        default: printf("\nSorry!! we dont have that item");
    }
    total_amount1=(p_sand+p_burger+p_fries+p_pizza+p_coke);
    printf("\nYour total amount for above oder is:%d",total_amount1);
    printf("\nEnter 1 for re-oder and 0 to stop");
    scanf("%d",&number);
    if(number==1)
    {
        goto start;
    }
    else 
    {
        goto start1;
    }
    start1:
    printf("\n***payment methods***");
    printf("\nEnter for 1 Debit card");
    printf("\nEnter 2 for credit card");
    printf("\nEnter 3 for UPI");
    printf("\nEnter 4 for COD");
    scanf("%d",&option2);
    switch(option2)
    {
        case 1:{
            printf("\nEnter your debit card number:");
            scanf("%d",&dc);
            printf("\nEnter CVV number");
            scanf("%d",&cvv);
            printf("\nEnter which type of card you have:");
            printf("\nEnter 1 for platinum");
            printf("\nEnter 2 for gold");
            printf("\nEnter 3 for silver");
            scanf("%d",&card);
            switch(card){
                case 1: {
                    printf("\nYou have 15 percentage discount");
                    total_amount2+=(total_amount1-total_amount1*15/100);
                    printf("\nYour total amount for oder is:%d",total_amount2);
                    break;
                }
                case 2:{
                    printf("\nYou have 10 percentage discount");
                    total_amount2+=(total_amount1-total_amount1*10/100);
                    printf("\nYour total amount for oder is:%d",total_amount2);
                    break;
                }
                case 3:{
                    printf("\nYou have 5 percentage discount");
                    total_amount2+=(total_amount1-total_amount1*5/100);
                    printf("\nYour total amount for oder is:%d",total_amount2);
                    break;
                }
                default:  printf("\nThat card we dont have");
                break;
            }
        }
        break;
        case 2:{
            printf("\ndo you want to use your credit score:");
            printf("\nEnter 1 for you want to use your credit");
            printf("\nEnter 0 for dont want to use credits but pay with credit card");
            scanf("%d",&cs);
            if(cs==1){
                printf("\nHow many credits you have:");
                scanf("%d",&credit);
                switch(credit){
                    case 1: {
                        if(credit>100) {
                            printf("\nYou have 15 percentage discount");
                            total_amount2+=(total_amount1-total_amount1*15/100);
                            printf("\nYour total amount for odering is:%d",total_amount2);
                        }
                        else if(credit<100){
                            printf("\nYou have 10 percentage discount");
                            total_amount2+=(total_amount1-total_amount1*10/100);
                            printf("\nYour total amount for odering is:%d",total_amount2);
                    }
                    default: printf("\nsorry you have less than 10 credits");
                    break;
                }
            }}else if (cs==0){
                printf("\nEnter the credit card number");
                scanf("%d",&c_card);
                printf("\nEnter the expiry date");
                scanf("%d",&expiry);
                printf("\nwithout credits you only have 4 percentage discount");
                total_amount2+=(total_amount1-total_amount1*4/100);
                printf("\nYour total amount is:%d",total_amount2);
            }
        }
        break;
        case 3:{
            printf("\nEnter which UPI method you want use");
            printf("\nenter 1 for phone pay");
            printf("\nEnter 2 for Patym");
            printf("\nEnter 3 for Gpay");
            scanf("%d",&upi);
            switch(upi){
                case 1:{
                    printf("\nYou have 10 percentage discount");
                    total_amount2+=(total_amount1-total_amount1*10/100);
                    printf("\nYour total amount is:%d",total_amount2);
                    break;
                }
                case 2:{
                    printf("\nYou have 7 percentage discount");
                    total_amount2+=(total_amount1-total_amount1*7/100);
                    printf("\nYour total amount for orderirg is:%d",total_amount2);
                    break;
                }
                case 3:{
                    printf("\nYou have only 5 percentage discount");
                    total_amount2+=(total_amount1-total_amount1*5/100);
                    printf("\nYour total amount for ordering is:%d",total_amount2);
                    break;
                }
                default: printf("\nWe dont have that type of UPI method sorry!!!");
            }
            break;
        }
        case 4:{
            printf("\nsorry!! we dont have any discount on COD option");
            total_amount2+=(total_amount1);
            printf("\nYour total amount for ordering is:%d",total_amount2);
            break;
        }
        default: printf("\nWe dont have that type of banking method");
        
    }
    printf("\n******Thankyou for ordering********");
    printf("\nYour order will be in 10 min and deliveried to your house");
    return 0;
}