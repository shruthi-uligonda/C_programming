#include<stdio.h>
int main()
{
    int n,i,j,negative=-1,positive=1,m;
    printf(" ");
    scanf("%d",&n);
    printf(" ");
    scanf("%d",&m);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            for(j=1;j<=m;j++){
                printf(" %d",negative);
                negative--;
            }
        }
        else{
            for(j=1;j<=m;j++){
                printf(" %d",positive);
                positive++;
            }
        }
        printf("\n");
    }
    return 0;
}
    
