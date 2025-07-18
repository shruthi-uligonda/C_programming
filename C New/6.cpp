#include<stdio.h>
int main()
{
    int hour;
    char talking;
    scanf("%c",&talking);
    scanf("\n %d",&hour);
    if((talking=='T')&&(hour<7||hour>20)){
        printf("\ntrue");
    }
    else {
        printf("\nfalse");
    }
    return 0;
}
