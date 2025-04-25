#include<stdio.h>
int main()
{
    int n,i,total_bill=0;
    printf("\nEnter the numbers of members:");
    scanf("%d",&n);
    int age[n];
    printf("Enter the age of the member:");
    for(i=0;i<n;i++){
        printf("\nage of %d member:",i+1);
        scanf("%d",&age[i]);
    }
    int entry_fee1=0,entry_fee2=0,entry_fee3=0;
    for(i=0;i<n;i++){
        if(age[i]<=15){
            entry_fee1+=10;
        }
    }
    for(i=0;i<n;i++){
        if(age[i]<=60&&age[i]>15){
            entry_fee2+=15;
        }
    }
    for(i=0;i<n;i++){
        if(age[i]>60){
            entry_fee3+=20;
        }
    }
    printf("\nEntry fee is:%d",entry_fee1);
    printf("\nEntry fee is:%d",entry_fee2);
    printf("\nEntry fee is:%d",entry_fee3);
    total_bill+=entry_fee1+entry_fee2+entry_fee3;
    printf("\nTotal bill for %d is:%d/-",n,total_bill);
    return 0;
}

