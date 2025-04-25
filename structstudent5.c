#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    float marks[3];
}s[3];
void main()
{
    printf("\nEnter the name,rollno and 5 subject marks of student:\n");
    for(int i=1;i<=3;i++)
    {
        printf("\nEnter Information of %d student:\n",i);
        scanf("%s%d",s[i].name,&s[i].rollno);
        for(int j=1;j<=3;j++) scanf("%f",&s[i].marks[j]);
    }
    for(int i=1;i<=3;i++)
    {
        printf("\n*********************************");
        printf("\nInformation of %d student:\n",i);
        printf("\n%s\n%d\n%.1f\n",s[i].name,s[i].rollno,s[i].marks[i]);
    }
}