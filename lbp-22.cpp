#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	printf("enter the year:");
	scanf("%d",&n);
	if (n%n==0)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
