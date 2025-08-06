#include<stdio.h>
int main()
{
	int t,x;
	printf("enter the no of cups bought:");
	scanf("%d",&x);
	if(x>=1)
	t=x+(x/6);
	printf("total cups is %d",t);
}
