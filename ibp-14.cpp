#include<stdio.h>
main()
{
	int sum=0,n;
	printf("enter a value:");
	scanf("%d",&n);
	sum=(n*(n+1)*(2*n+1))/6;
	printf("%d",sum);
}
