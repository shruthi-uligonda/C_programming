#include<stdio.h>
int main()
{
	int a=5;
	int b=10;
	int c=15;
	int result = a+b*c/a-b;
	printf("\nResult: %d",result);
	return 0;
}
/*REASON: According to operator precedence, first high-priority operators should be
added followed by low-priority operators. Applying this rule in the question so,
first "c should be divided by a", then the result of that should be multiplied by
"b" again the result should be added to "a", then in next step the result should
be subracted by "b".And finally the output will be 25. */
