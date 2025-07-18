#include<stdio.h>
int main()
{
	int side_1,side_2,side_3;
	printf(" ");
	scanf("%d",&side_1);
	printf(" ");
	scanf("%d",&side_2);
	printf(" ");
	scanf("%d",&side_3);
	if(side_1==side_2&&side_2==side_3) {
		printf("Equilateral triangle");
	}
	else if(side_1==side_2||side_2==side_3||side_3==side_1) {
		printf("Isosceles triangle");
	}
	else {
		printf("Scalene triangle");
	}
	return 0;
}
