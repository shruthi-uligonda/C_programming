#include<stdio.h>
main()
{
    int network_packet=20,payload=1500;
    payload=network_packet+payload;
    printf("\n size of a payload:%d",payload);
    return 0;
}