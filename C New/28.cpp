#include<stdio.h>
int main()
{
    int i,j,N1;
    printf(" ");
    scanf("%d",&N1);
    for(i=1;i<=N1;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
        
    }
    return 0;
}
