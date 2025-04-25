#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,choice,highest,lowest,count=0;
    start:
    printf("\nEnter the number of students:");
    scanf("%d",&n);
     if(n<0){
        count++;
        printf("\n%d Attempt(s) are over!!",count);
        if(count<3)
        goto start;
        else
        exit(0);
    }
    int marks[n],sum=0;
    printf("\nEnter the marks of students one by one:");
    for(i=0;i<n;i++){
        printf("\nMarks%d;",i+1);
        scanf("%d",&marks[i]);
    }
   
    printf("\n1.calculate average marks");
    printf("\n2.Highest marks");
    printf("\n3.Lowest marks");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    
    switch(choice){
        case 1: {
            for(i=0;i<n;i++)
                sum+=marks[i];
        }
        printf("\nAverage marks=%d",(sum/n));
        break;
        case 2:{
            highest=marks[0];
            for(i=0;i<n;i++){
                if(marks[i]>highest)
                highest=marks[i];
                break;
            }
            printf("\nThe highest marks are=%d",highest);
            break;
        }
        case 3: {
            lowest=marks[0];
            for(i=0;i<n;i++){
                if(marks[i]<lowest)
                lowest=marks[i];
                break;
            }
            printf("\nThe lowest marks are=%d",lowest);
            break;
        }
        default:
        printf("Invalid input");
        break;
    }
    return 0;
}