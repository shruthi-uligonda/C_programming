#include<stdio.h>
int main()
{
    int five_digit,first_digit,fifth_digit;
    printf(" ");
    scanf("%d",&five_digit);
    first_digit=five_digit/10000;
    fifth_digit=five_digit%10;
    if(five_digit>=0&&first_digit*first_digit==fifth_digit*fifth_digit){
        printf("YES");
    }else if(five_digit>=0&&first_digit*first_digit!=fifth_digit*fifth_digit){
        printf("NO");
    }else
    printf("ERROR");
   
        
}

    
