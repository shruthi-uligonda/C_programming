#include<stdio.h>
int main ()
{
	char c='A';
	int i=10;
	float f=3.5,result;
	result=c+i*f;
	printf("\n%.2f",result);
	return 0;

}
/*REASON:ASCII value of 'A' is 65,value of int(i) is "10" and value of float(f) is "3.5" .
According to operator of precedence,When an expression has more than one operator with
different level of priority then precedence rule is used.Using that operator, first "i is
multiplied with f" and next it is added to "c".And finally the output will be 100.00. */
