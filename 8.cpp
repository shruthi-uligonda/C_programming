#include<stdio.h>
int main()
{
    int a=5;
    double b=7.5;
    int result=a+(int)b/2;
    printf("Result: %d\n",result);
    return 0;
}
/*REASON: Given int a=5,i.e interger value of a is '5'.
and double b=7.5,i.e double value of b is '7.5'.
1:Type conversion: At first double value of b(7.5) is converted into interger (7)
 by using Type conversion.
2:operator precendence:According to operator precedence rule, division has
 more priority than addition.So division will be done.
3:Addition:Finally the integers will be added.*/
