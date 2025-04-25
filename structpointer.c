#include<stdio.h>
struct person
{
    char pname[10];
    int page;
    float pheight;
};
void fun_str(struct person *p2)
{
    printf("\nName:%s",p2->pname);
    printf("\nAge:%d",p2->page);
    printf("\nHeight:%f",p2->pheight);
}
int main()
{
    struct person p1={"KRISHNA",164,209.5674};
    fun_str(&p1);
    return 0;
}