#include<stdio.h>
struct person
{
    char pname[10];
    int page;
    float pheight;
};
void fun_str(char name[],int age,float height)
{
    printf("\nName:%s",name);
    printf("\nAge:%d",age);
    printf("\nHeight:%f",height);
}
int main()
{
    struct person p1={"KRISHNA",164,209.5674};
    fun_str(p1.pname,p1.page,p1.pheight);
    return 0;
}