#include<stdio.h>
int main()
{
    float sp,item_name,cgst_rate,sgst_rate,cgst,sgst,total_amount_payable;
    printf("please enter the item name,sp,cgst_rate,sgst_rate:");
    scanf("\n %f",&item_name,&sp,&sgst_rate,&cgst_rate);
    cgst_rate=9;
    sgst_rate=9;
    cgst=((sp*cgst)/100);
    sgst=((sp*sgst/100));
    total_amount_payable:sp+sgst+cgst;
    printf("\n item name is:%f",item_name);
    printf("\n sp:%f",sp);
    printf("\n cgst_rate(%):%f",cgst_rate);
    printf("\n sgst_rate(%):%f",sgst_rate);
    printf("\n total_amount_payable:%f",total_amount_payable);
    return 0;
    
}