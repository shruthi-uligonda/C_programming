#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("enter a,b,c values:");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		printf("ROOT ARE REAL AND UNEQUAL\n");
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("root1=%f root2=%f",r1,r2);
	}
	else if (d==0)
	{
		printf("ROOT ARE REAL AND EQUAL\n");
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("root1=%f root2=%f",r1,r2);
	}
	else
	printf("root ARE IMAGINARY");
}
