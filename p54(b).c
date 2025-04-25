#include<stdio.h>
int main()
{
    int IM;
    printf("\n Enter marks of intermediate:");
    scanf("\n %d",&IM);
    if(IM>=700){
        printf("\n CSE-seat will be alloted");
    }
    else{
        if(IM>=500 && IM<700){
            printf("\n Seat-ME/CIVIL");
        }else{
            printf("\n No seat allotted");
        }
    }
}

