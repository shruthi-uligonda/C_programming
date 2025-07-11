#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,s;
	printf("enter n values:");
	scanf("%d",&n);
	s=n*(n+1)/2;
	printf("sum of %d natural numbers:%d",n,s);
}
