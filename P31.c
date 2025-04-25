#include<stdio.h>
 int main()
{
    int file_size=1048576,kilobytes=1024;
    kilobytes=file_size/1024;
    printf("\n size of file in kilobytes:%d",kilobytes);
    return 0;
}