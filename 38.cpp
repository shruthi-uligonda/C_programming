#include<stdio.h>
main()
{
    int available_cars = 15;
    int entering_cars = 5;
    int exiting_cars = 2;
    int total_cars = available_cars - entering_cars + exiting_cars;
    printf("\n %d",total_cars);
    return 0;
}
