#include<stdio.h>
int main()
{
    int n=4,tq=4;
    int bt[]={10,5,8,12};
    int at[]={0,0,0,0};
    int id[]={1,2,3,4},remaining_bt[4],ct[4],tat[4],wt[4];
    float avg_tat=0,avg_wt=0;
    for(int i=0;i<n;i++) remaining_bt[i] = bt[i];
    int time=0,done;
    printf("\nGantt Chart: ");
    do{
        done=1;
        for(int i=0;i<n;i++)
        {
            if(remaining_bt[i]>0)
            {
                done=0;
                printf(" P%d |",id[i]);
                if(remaining_bt[i]>tq)
                {
                    time+=tq;
                    remaining_bt[i]-=tq;
                }
                else{
                    time+=remaining_bt[i];
                    ct[i]=time;
                    remaining_bt[i]=0;
                }
            }
        }
    }
    while(!done);
    printf("\n\nID  AT  BT   CT    TAT    WT\n");
    for(int i=0;i<n;i++)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        avg_tat+=tat[i];
        avg_wt+=wt[i];
        printf("%2d %2d   %2d   %2d    %2d    %2d\n",id[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    avg_tat/=n;
    avg_wt/=n;
    printf("\nAverage Turnaround Time: %.2f",avg_tat);
    printf("\nAverage Waiting Time: %.2f\n",avg_wt);
}
