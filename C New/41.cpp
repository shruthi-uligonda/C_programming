#include<stdio.h>
int main()
{
    int num_chocolates,num_friends,x;
    printf(" ");
    scanf("%d",&num_chocolates);
    printf(" ");
    scanf("%d",&num_friends);
    if(num_chocolates<=num_friends){
        printf("Not possibilities");
        return 1;
    }
    int k=1;
    while(k<num_chocolates){
        int remaining_chocolates=num_chocolates-k;
        if(remaining_chocolates%num_friends==0){
            int chocolates_per_friend=remaining_chocolates/num_friends;
            printf("Each can get %d equally, by having %d with her.\n",chocolates_per_friend,k);
            
        }
        k++;
    }
}
