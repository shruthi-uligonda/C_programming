#include<stdio.h>
int main()
{
	float h,r,v;
	printf("enter h value:");
	scanf("%f",&h);
	printf("enter r value:");
	scanf("%f",&r);
	v=1/3*3.14*r*r*h;
	printf("volume of cone is %2f\n",v);
	return 0;
}
