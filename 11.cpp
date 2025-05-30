	#include<stdio.h>
int main()
{
    int item_num1=5,item_num2=4;
    float total_weight;
    float weight_1=15,weight_2=25, Average_value;
    
    total_weight=(weight_1*item_num1)+(weight_2*item_num2);
    
    Average_value=total_weight/(item_num1+item_num2);
    
    printf("%.2f\n",Average_value);
    return 0;
    
}
