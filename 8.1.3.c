#include<stdio.h>
#include<stdlib.h>
int main()
{
    int option1,option2;
    start:
    printf("\n*********MENU*********");
    printf("\n1.Pizza {cost:200/-}");
    printf("\n2.Burger {cost:100/-}");
    printf("\n3.Pasta {cost-150/-}");
    printf("\n4.Fries {cost-50/-}");
    printf("\nEnter your option:");
    scanf("%d",&option1);
    int q1=0,q2=0,q3=0,q4=0,total_price1;
    int total_price2,total_price3,total_price4;
    switch(option1){
        case 1:{
            printf("\nEnter the quantity of Pizza:");
            scanf("%d",&q1);
            total_price1=q1*200;
            printf("\nThe Total amount for Pizza is:%d",total_price1);
            break;
        }
        case 2:{
            printf("\nEnter the quantity of Burger:");
            scanf("%d",&q2);
            total_price2=q2*100;
            printf("\nThe total amount for Burger is:%d",total_price2);
            break;
        }
        case 3:{
            printf("\nEnter the quantity of Pasta:");
            scanf("%d",&q3);
            total_price3=q3*150;
            printf("\nThe total amount for Pasta is:%d",total_price3);
            break;
        }
        case 4:{
            printf("\nEnter the quantity of Fries:");
            scanf("%d",&q4);
            total_price4=q4*50;
            printf("\nThe total amount for Fries is:%d",total_price4);
            break;
        }
        default:
        printf("\nYour order is not available");
        break;
    }
    int number;
    while(1){
        printf("\nEnter (1) for reorder or (0) for stop ordering:");
        scanf("%d",&number);
        if(number==1)
        goto start;
        else
        break;
    }
    int total_amount;
    total_amount=total_price1+total_price2+total_price3+total_price4;
    printf("\nThe total amount for your order is:%d",total_amount);
    printf("\nPayment options are:");
    printf("\n1.Credit card");
    printf("\n2.Debit card");
    printf("\n3.UPI mode");
    printf("\n4.Cash");
    printf("\nEnter your choice:");
    scanf("%d",&option2);
    switch(option2){
        case 1:{
            if(total_amount>500)
                printf("\nTotal amount=%d",total_amount-(total_amount*10/100));
            else
                printf("\nTotal amount=%d",total_amount);
            break;
        }
        case 2 :{
            if(total_amount>500)
               printf("\nTotal amount=%d",total_amount-(total_amount*5/100));
            else
               printf("\nTotal amount=%d",total_amount);
            break;
        }
        case 3:{
            if(total_amount>500)
              printf("\nTotal amount=%d",total_amount-(total_amount*15/100));
            else
              printf("\nTotal amount=%d",total_amount);
            break;
        }
        case 4:{
            printf("\nNo discount");
            printf("\nTotal amount=%d",total_amount);
        }
        default:
        printf("\nInvalid payment mode");
        break;
        
    }
    return 0;
}

