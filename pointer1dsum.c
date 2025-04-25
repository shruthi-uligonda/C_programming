#include<stdio.h>
int main()
{
    int i,arr[5]={1,2,3,4,5},*ptr=arr,sum=0;
    for(i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        sum+=*ptr;
        ptr++;
    }
    printf("\n");
    ptr--;
    for(i=0;i<5;i++)
    {
        printf("%d ",*ptr--);
    }
    printf("\nThe sum is:%d",sum);
}