#include<stdio.h>
#include<string.h>
struct train
{
    int train_id;
    char train_name[20],driver_name[20],route[20],station[20],status[20];
    int estimated_time;
}c[3];
int main()
{
    struct c;
    int i,update_station,train_details;
    char new_station[20];
    for(i=1;i<=3;i++)
    {
        printf("\nEnter the details of the %d train:",i);
        printf("\nEnter train id number:");
        scanf("%d",&c[i].train_id);
        printf("\nEnter train name:");
        scanf("%s",c[i].train_name);
        printf("\nEnter the driver name:");
        scanf("%s",c[i].driver_name);
        printf("\nEnter route of the train(A or B)");
        scanf("%s",c[i].route);
        printf("\nEnter the station:");
        scanf("%s",c[i].station);
        printf("\nEnter the status of the train:");
        scanf("%s",c[i].status);
        printf("\nEnter estimated time:");
        scanf("%d",&c[i].estimated_time);
    }
      for(i=1;i<=3;i++)
    {
        printf("\nDetails of the %d train:\n",i);
        printf("Train id:%d\n",c[i].train_id);
        printf("Train name:%s\n",c[i].train_name);
        printf("Train driver name:%s\n",c[i].driver_name);
        printf("Train route:%s\n",c[i].route);
        printf("Train station:%s\n",c[i].station);
        printf("Train status:%s\n",c[i].status);
        printf("Train estimated time:%d\n",c[i].estimated_time);
    }
    printf("*******************************************************");
    printf("\nEnter 1 to update the current loction of 1st train:");
    printf("\nEnter 2 to update the current loction of 2nd train:");
    printf("\nEnter 3 to update the current location of 3rd train:");
    scanf("%d",&update_station);
    switch(update_station)
    {
        case 1:
        {
            printf("\nEnter the location to update of 1st train:");
            scanf("%s",new_station);
            printf("Train id:%d\n",c[1].train_id);
            printf("Train name:%s\n",c[1].train_name);
            printf("Train driver name:%s\n",c[1].driver_name);
            printf("Train route:%s\n",c[1].route);
            printf("Train station:%s\n",strcpy(c[1].station,new_station));
            printf("Train status:%s\n",c[1].status);
            printf("Train estimated time:%d\n",c[1].estimated_time);
        }
        break;
        case 2:
        {
            printf("\nEnter the location to update of 1st train:");
            scanf("%s",new_station);
            printf("Train id:%d\n",c[2].train_id);
            printf("Train name:%s\n",c[2].train_name);
            printf("Train driver name:%s\n",c[2].driver_name);
            printf("Train route:%s\n",c[2].route);
            printf("Train station:%s\n",strcpy(c[2].station,new_station));
            printf("Train status:%s\n",c[2].status);
            printf("Train estimated time:%d\n",c[2].estimated_time);
        }
        break;
        case 3:
        {
            printf("\nEnter the location to update of 1st train:");
            scanf("%s",new_station);
            printf("Train id:%d\n",c[3].train_id);
            printf("Train name:%s\n",c[3].train_name);
            printf("Train driver name:%s\n",c[3].driver_name);
            printf("Train route:%s\n",c[3].route);
            printf("Train station:%s\n",strcpy(c[3].station,new_station));
            printf("Train status:%s\n",c[3].status);
            printf("Train estimated time:%d\n",c[3].estimated_time);
        }
        break;
    }
    printf("\nEnter 1 to know the train details of 1st train:");
    printf("\nEnter 2 to know the train details of 2nd train:");
    printf("\nEnter 3 to know the train details of 3rd train:");
    scanf("%d",&train_details);
    switch(train_details)
    {
        case 1:
        {
            printf("\nDetails of the 1st train:\n");
            printf("Train id:%d\n",c[1].train_id);
            printf("Train name:%s\n",c[1].train_name);
            printf("Train driver name:%s\n",c[1].driver_name);
            printf("Train route:%s\n",c[1].route);
            printf("Train station:%s\n",c[1].station);
            printf("Train status:%s\n",c[1].status);
            printf("Train estimated time:%d\n",c[1].estimated_time);
        }
        break;
        case 2:
        {
            printf("\nDetails of the 2nd train:\n");
            printf("\nTrain id:%d\n",c[2].train_id);
            printf("Train name:%s\n",c[2].train_name);
            printf("Train driver name:%s\n",c[2].driver_name);
            printf("Train route:%s\n",c[2].route);
            printf("Train station:%s\n",c[2].station);
            printf("Train status:%s\n",c[2].status);
            printf("Train estimated time:%d\n",c[2].estimated_time);
        }
        break;
        case 3:
        {
            printf("\nDetails of the 3rd train:\n");
            printf("\nTrain id:%d\n",c[3].train_id);
            printf("Train name:%s\n",c[3].train_name);
            printf("Train driver name:%s\n",c[3].driver_name);
            printf("Train route:%s\n",c[3].route);
            printf("Train station:%s\n",c[3].station);
            printf("Train status:%s\n",c[3].status);
            printf("Train estimated time:%d\n",c[3].estimated_time);
        }
        break;
    }
    printf("\n*****The Total Trains Available******\n");
    for(i=1;i<=3;i++)
    {
            printf("Train id:%d\n",c[i].train_id);
            printf("Train route:%s\n",c[i].route);
            printf("Train station:%s\n",c[i].station);
            printf("Train status:%s\n",c[i].status);
            printf("Train estimated time:%d\n",c[i].estimated_time);
            printf("\n");
    }
    printf("\n**********Train Report************\n");
    printf("\nThe Current status of all Trains:\n");
    for(i=1;i<=3;i++)
    {
        printf("\nThe location of %d Train:%s",i,c[i].station);
        printf("\nThe status is :%s\n",c[i].status);
    }
}
