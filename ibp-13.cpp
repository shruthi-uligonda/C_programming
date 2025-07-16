#include<stdio.h>
main()
{
	float m,v,k=0;
	printf("enter mass and velocity:");
	scanf("%f%f",&m,&v);
	k=(0.5)*m*v*v;
	printf("%f",k);
}
