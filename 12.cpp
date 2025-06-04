#include<stdio.h>
int main()
{
    int Temperature;
    scanf("\n %d",&Temperature);
    
    if(Temperature>25){
        printf("It's a good day for outdoor activities!");
    }
    else{
        printf("\nIt's better to stay in door");
    }
    return 0;
}
