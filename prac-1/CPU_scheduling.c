#include<stdio.h>

void fcfs();
void sjf();
void priority();
void roundRobin();

int main()
{
    int choice;

    do{
        printf("\n-=-=-=-CPU Scheduling Algorithms-=-=-=-");
        printf("\n1. First Come First Serve");
        printf("\n2. Shortest Job First");
        printf("\n3. Priority Scheduling");
        printf("\n4. Round Robin");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: fcfs(); 
            break;
            case 2: sjf();
            break;
            case 3: priority();
            break;
            case 4: roundRobin();
            break;
            case 5: printf("Exit");
            break;
            default:printf("Invalid Choice");
        }

    }while(choice!=5);

    return 0;
}

void fcfs()
{
    int n,i;
    float wt=0,tat=0,avg_wt,avg_tat;

    printf("\nEnter number of processes: ");
    scanf("%d",&n);

    int bt[n], waiting[n], turnaround[n];

    for(i=0;i<n;i++)
    {
        printf("Enter burst time of P%d: ",i+1);
        scanf("%d",&bt[i]);
    }

    waiting[0]=0;

    for(i=1;i<n;i++)
        waiting[i]=waiting[i-1]+bt[i-1];

    for(i=0;i<n;i++)
        turnaround[i]=waiting[i]+bt[i];

    printf("\nProcess\tBT\tWT\tTAT\n");

    for(i=0;i<n;i++)
    {
        wt+=waiting[i];
        tat+=turnaround[i];
        printf("P%d\t%d\t%d\t%d\n",i+1,bt[i],waiting[i],turnaround[i]);
    }

    avg_wt=wt/n;
    avg_tat=tat/n;

    printf("\nAverage Waiting Time = %f",avg_wt);
    printf("\nAverage Turnaround Time = %f\n",avg_tat);
}

void sjf()
{
    int n,i,j,temp;
    float wt=0,tat=0,avg_wt,avg_tat;

    printf("\nEnter number of processes: ");
    scanf("%d",&n);

    int bt[n], waiting[n], turnaround[n];

    for(i=0;i<n;i++)
    {
        printf("Enter burst time of P%d: ",i+1);
        scanf("%d",&bt[i]);
    }

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(bt[i]>bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }

    waiting[0]=0;

    for(i=1;i<n;i++)
        waiting[i]=waiting[i-1]+bt[i-1];

    for(i=0;i<n;i++)
        turnaround[i]=waiting[i]+bt[i];

    printf("\nProcess\tBT\tWT\tTAT\n");

    for(i=0;i<n;i++)
    {
        wt+=waiting[i];
        tat+=turnaround[i];
        printf("P%d\t%d\t%d\t%d\n",i+1,bt[i],waiting[i],turnaround[i]);
    }

    avg_wt=wt/n;
    avg_tat=tat/n;

    printf("\nAverage Waiting Time = %f",avg_wt);
    printf("\nAverage Turnaround Time = %f\n",avg_tat);
}

void priority()
{
    int n,i,j,temp;
    float wt=0,tat=0,avg_wt,avg_tat;

    printf("\nEnter number of processes: ");
    scanf("%d",&n);

    int bt[n],pr[n],waiting[n],turnaround[n];

    for(i=0;i<n;i++)
    {
        printf("Enter burst time of P%d: ",i+1);
        scanf("%d",&bt[i]);
        printf("Enter priority of P%d: ",i+1);
        scanf("%d",&pr[i]);
    }

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(pr[i]>pr[j])
            {
                temp=pr[i];
                pr[i]=pr[j];
                pr[j]=temp;

                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }

    waiting[0]=0;

    for(i=1;i<n;i++)
        waiting[i]=waiting[i-1]+bt[i-1];

    for(i=0;i<n;i++)
        turnaround[i]=waiting[i]+bt[i];

    printf("\nProcess\tBT\tPR\tWT\tTAT\n");

    for(i=0;i<n;i++)
    {
        wt+=waiting[i];
        tat+=turnaround[i];
        printf("P%d\t%d\t%d\t%d\t%d\n",i+1,bt[i],pr[i],waiting[i],turnaround[i]);
    }

    avg_wt=wt/n;
    avg_tat=tat/n;

    printf("\nAverage Waiting Time = %f",avg_wt);
    printf("\nAverage Turnaround Time = %f\n",avg_tat);
}

void roundRobin()
{
    int n,qt,i;
    int remain;
    float wt=0,tat=0;

    printf("\nEnter number of processes: ");
    scanf("%d",&n);

    int bt[n],rt[n];

    for(i=0;i<n;i++)
    {
        printf("Enter burst time of P%d: ",i+1);
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d",&qt);

    remain=n;
    int time=0;

    while(remain!=0)
    {
        for(i=0;i<n;i++)
        {
            if(rt[i]>0)
            {
                if(rt[i]<=qt)
                {
                    time+=rt[i];
                    tat+=time;
                    wt+=time-bt[i];
                    rt[i]=0;
                    remain--;
                }
                else
                {
                    time+=qt;
                    rt[i]-=qt;
                }
            }
        }
    }
    
    printf("\nAverage Waiting Time = %f",wt/n);
    printf("\nAverage Turnaround Time = %f\n",tat/n);
}