#include<stdio.h>
int main()
{
    int i,arr[5]={1,2,3,4,5},*ptr=arr;
    for(i=0;i<5;i++)
    {
        printf("%d ",*ptr * *ptr);
        ptr++;
    }
    printf("\n");

}
