#include<stdio.h>
int main()
{
    int i,j,z;
    printf(" ");
    scanf("%d",&z);
    for(i=1;i<=z;i++){
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    if(z==0){
        printf("Invalid input");
    }
    return 0;
}
