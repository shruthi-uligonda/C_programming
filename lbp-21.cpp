#include<stdio.h>
main(){
	int temp;
	printf("enter temperature:");
	scanf("%d",&temp);
	if(temp<0){
		printf("FREEZING");
	}
	else if(temp>=0&&temp<=20){
		printf("cold");
	}
	else if(temp>=21 && temp<=30){
		printf("moderate");
	}
	else 
	{
		printf("Hot");
}
