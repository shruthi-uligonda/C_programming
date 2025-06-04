#include<stdio.h>
int main()
{
    float kilometers,fuel;
    scanf("\n %f",&kilometers);
    fuel=kilometers*10;
    if(fuel<=100){
        printf("100");
    }
    else {
        printf("\n %d",(int)fuel);
        return 0;
    }
    
}

