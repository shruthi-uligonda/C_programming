#include<stdio.h>
int main()
{
    int IM;
    printf("\n Enter marks of Intermediate:");
    scanf("\n %d",&IM);
   if(IM>=950){
       if(IM>950&&IM<=990){
           printf("\n 30 percentgae of concession");
       }else{
           printf("\n 50 percentgae of concession");
       }
   }
   else{
       printf("\n NO fee concession");
   }
}

