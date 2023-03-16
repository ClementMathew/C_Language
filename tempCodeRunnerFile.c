// C program for Shortest Job First Cpu Scheduling
//NON PREEMPTIVE


/*
at  = arrival time
NOP = number of processes
wt  = waiting time
tat = turn around time
bt  = cpu burst time
temp = temporary array
In this program the process that comes/arrives first will execute first 
*/

#include<stdio.h>

int main()
{
  int i,j,NOP,pos,sum=0,count=0,p[10],at[10],wt[10],tat[10],bt[10],ct[i],temp;
  float avg_tat,avg_wt;
  
  printf("Enter the number of processes: ");
  scanf("%d",&NOP);
  printf("\n-----FIRST COME FIRST SERVE SCHEDULING-----");
  
  for(i=0;i<NOP;i++)
  {
    printf("\nEnter the details of process[%d]: ",i+1);
        printf("\nEnter the arrival time: ");
        scanf("%d",&at[i]);
    printf("\nEnter the burst time: ");
    scanf("%d",&bt[i]);
    p[i]=i+1;                      // contains the process number
  }

    
  //sorting burst time, priority and process number in ascending order using selection sort
    for(i=0;i<NOP;i++)
    {
        pos=i;
        for(j=i+1;j<NOP;j++)
        {
            if(at[j]<at[pos])
                pos=j;
        }
 
        // sorting arrival time in ascending order
        temp=at[i];
        at[i]=at[pos];
        at[pos]=temp;

        // sorting burst time according to order of arrival time
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        // sorting process number according to order of arrival time
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    int x;
    for(i=0;i<NOP;i++)
    {
        x=0;
        for(j=0;j<=i;j++)
        {
            x = x + bt[j];   
            printf("%d ",x);            // for i=0 , j loop runs for 1; for i=1, j loop runs for 2 time .........etc
        }
        //ct[i] = at[0] + x;
    }
 
    wt[0]=0;  //waiting time for first process is zero
    
    // calculating waiting time
    for(i=1;i<NOP;i++)
    {
        wt[i]=0;
       
       for(j=0;j<i;j++)
        {
          wt[i] = wt[i]+bt[j];
     }
        sum=sum+wt[i];
    }
 
    avg_wt=sum/NOP;      //To calculate average waiting time
    sum=0;

    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time\tArrival time");
    for(i=0;i<NOP;i++)
    {
        tat[i]=ct[i]-at[i];     // To calculate turnaround time first process
        sum=sum+tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d\t\t%d\t\t",p[i],bt[i],wt[i],tat[i],at[i]);
    }
 
    avg_tat=sum/NOP;     //To  calculate average turnaround time
    printf("\n\nAverage Waiting Time=%.2f",avg_wt);
    printf("\nAverage Turnaround Time=%.2f\n",avg_tat);
 
  return 0;
}