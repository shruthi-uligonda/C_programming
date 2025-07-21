#include<stdio.h>
int main(void)
{
	int c,f;
	printf("enter degree fahrenheit:");
	scanf("%d",&f);
	c=(f-32)*0.9;
	printf("%d fahrenheit to celcius:%d",f,c);
}
