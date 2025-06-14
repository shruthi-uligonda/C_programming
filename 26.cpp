#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,i,armstrong,remainder,temp,number,count=0,dc;
    printf(" ");
    scanf("%d",&n1);
    printf(" ");
    scanf("%d",&n2);
    if(n1>0&&n2>0){
        for(i=n1+1;i<=n2;i++){
            armstrong=dc=0;
            temp=number=i;
            while(number>0){
                remainder=number%10;
                dc++;number/=10;
            }
            while(temp>0){
                remainder=temp%10;
                armstrong+=pow(remainder,dc);
                temp/=10;
            }
            if(i==armstrong)
            count=count+1;
        }
        printf("\n%d",count);
    }
    else
    printf("\nInvalid Input");
    return 0;
  
    
}
