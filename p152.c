#include<stdio.h>
int main()
{
    int A[2][2]={1,2,3,14},*p1=&A[0][0],i,j;
    int B[2][2]={4,13,2,1},*p2=&B[0][0];
    int C[2][2],*p3=&C[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++) *p3++=*p1++ + *p2++;
    }
    p3=C;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++) printf("%d ",*p3++);
        printf("\n");
    }
    return 0;
}
