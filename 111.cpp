#include<stdio.h>
int main()
{
    int arr[]={1,7,13,9,5,8,100,12},i,max=arr[0],min=arr[0];
    for(i=1;i<8;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nThe maximum element in the array=%d",max);
    printf("\nThe minimum elemetn in the array=%d",min);
    return 0;
}
