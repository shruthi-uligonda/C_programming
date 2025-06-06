#include<stdio.h>
int main()
{
    int num,i,square,cube,integer;
    printf(" ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        integer=i;
        square=i*i;
        cube=i*i*i;
        printf("\n%d %d %d",integer,square,cube);
        
    }
}
