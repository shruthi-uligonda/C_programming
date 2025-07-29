#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s;
	printf("enter a,b,c values:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	a=sqrt(s*(s-a)(s-b)(s-c));
	printf("%f",a);
}
