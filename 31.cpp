#include<stdio.h>
int main()
{
    int i=1,j=1,n;
    printf(" ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=10;j++){
            printf("\n%-5d\tx\t %-5d=        %-5d",i,j, i*j);
        }
        printf("\n");
    }
    return 0;
}
