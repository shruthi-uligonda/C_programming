#include<stdio.h>
main()
{
	int file_size=1048576,kilobytes=1024;
	kilobytes=file_size/1024;
	printf("%d",kilobytes);
	return 0;
}
