#include<stdio.h>
int main()
{
    int a=3661,seconds=60;
    
    printf("\n number of hours:%d",a/3600);
    printf("\n number of minutes:%d",seconds%3600/60);
    printf("\n number of seconds:%d",3661%60);
    return 0;
}