#include<stdio.h>
int main()
{
	typedef struct date{
		int date,month,year;
	}date;
	date a,b;
	a.date=5;
	a.month=12;
	a.year=1999;
	
	b.date=5;
	b.month=12;
	b.year=1999;
	if(a.date==b.date&&a.month==b.month&&a.year==b.year) printf("Equal");
	date c;
	c=a;
	else printf("\nNot");
	
}
