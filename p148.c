#include<stdio.h>
int main()
{
    int a=5,*p1=&a;
    printf("Size of a=%d,size of p1=%d",sizeof(a),sizeof(p1));
    float b=1.23,*p2=&b;
    printf("Size of b=%f,size of p12=%f",sizeof(b),sizeof(p2));
    double c=4.56789,*p3=&c;
    printf("Size of c=%d,size of p3=%d",sizeof(c),sizeof(p2));
    char d='x',*p4=&d;
    printf("Size of d=%c,size of p4=%c",sizeof(d),sizeof(p4));
}
