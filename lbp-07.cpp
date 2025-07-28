#include<stdio.h>
#include<math.h>
int main (void)
{
	float a,b,h,area;
	printf("enter a,b,h values:");
	scanf("%f %f %f",&a,&b,&h);
	area=(a+b)*h/2;
	printf("area of trapezoid:%f",area);
}
