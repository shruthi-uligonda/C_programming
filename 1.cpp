#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int arrival[n], burst[n], completion[n], waiting[n], turnaround[n], id[n];
    printf("Enter Arrival Time and Burst Time for each process:\n");
    for (int i = 0; i < n; i++) {
        id[i] = i + 1;
        printf("Process %d: ", i + 1);
        scanf("%d %d", &arrival[i], &burst[i]);
    }
    int total_wt = 0, total_tat = 0;
    int time = 0;
    for (int i = 0; i < n; i++) {
        if (time < arrival[i])
            time = arrival[i]; 
        completion[i] = time + burst[i];
        turnaround[i] = completion[i] - arrival[i];
        waiting[i] = turnaround[i] - burst[i];
        total_wt += waiting[i];
        total_tat += turnaround[i];
        time = completion[i];
    }
    printf("\nProcess  Arrival  Burst  Completion  Turnaround  Waiting\n");
    for (int i = 0; i < n; i++) {
        printf("%6d %8d %6d %10d %10d %8d\n",id[i],arrival[i],burst[i],completion[i],turnaround[i],waiting[i]);
    }
    printf("\nAverage Waiting Time: %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_tat / n);
    printf("\nGantt Chart:\n");
    printf(" ");
    for (int i = 0; i < n; i++) {
        printf("| P%d ", id[i]);
    }
    printf("|\n");
    printf("0");
    for (int i = 0; i < n; i++) {
        printf(" %d", completion[i]);
    }
    printf("\n");
    return 0;
}
