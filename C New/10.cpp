#include<stdio.h>
int main()
{
    int p,q,r,s;
    printf(" ");
    scanf("\n %d",&p);
    printf(" ");
    scanf("\n %d",&q);
    printf(" ");
    scanf("\n %d",&r);
    printf(" ");
    scanf("\n %d",&s);
   
    if(r&s>0&&p%2==0&&q>r&&s>p&&r+s>p+q){
        printf("\nCorrect values");
    }
    else{
        printf("\nWrong values");
    }
   
    return 0;
}
