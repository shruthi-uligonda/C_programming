#include<stdio.h>
#include<math.h>
int main(void)
{
	float r,h,v,p=3.14;
	printf("enter r,h values");
	scanf("%f %f",&r,&h);
	  v=p*r*r*h;
	printf("volume of cylinder:%f",v);
}
