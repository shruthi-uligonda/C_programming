#include<stdio.h>
int main()
{
    int a=6;
    int b=3;
    int c=2;
    int result=a/(b-c)+b;
    printf("Result: %d\n",result);
    return 0;
}
/*REASON:Given values of a=6,b=3,c=2.

1:subtraction=First (b-c) should be subtract in the expression.

2:Division=Secondly, Acoording to operator precedence division should be done.

3:Addition=At last addition is done.

4:AFFECT=Without parentheses, the expession will be different because of operator 
precendence.So, first subratction is done in parentheses and then the result 
will be added .*/

