#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("enter a,b side value:");
	scanf("%d%d",&a,&b);
	c=sqrt((a*a)+(b*b));
	printf("c(hypotenous) value :%d",c);
}
