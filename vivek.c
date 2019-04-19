#include<stdio.h>
#include<conio.h>
int process[10] = {1,2,3,4,5,6,7,8,9,10};
int arrival_time[10] = {0,3,5,9,10,12,14,16,17,19};
int burst_time[10]   = {6,2,1,7,5,3,4,5,7,2};
int total_time = 0;
int completion_time[10], final_burst_time[10], tat[10], wt[10];
float avgtat = 0.0, avgwt = 0.0 ;

void main()
{
    printf("Process Table :\n");
    printf("\nProcess AT  BT\n");
    for(int i = 0; i < 10; i++)
	{
		printf("\np[%d]   %d     %d\n", process[i], arrival_time[i], burst_time[i]);
	}

	//p1 is executing
	printf("\nP[1] has arrival time as 0 so it will not execute .\n");
	total_time += 2;
	final_burst_time[0] = burst_time[0];

	printf("\nArrival time for p[2] < executed time...going for next iteration\n");
	total_time += 2;

	//p2 is executing as total time = 4
	printf("\np2 is executing");
	final_burst_time[1] = 0;
	total_time += burst_time[1];
	completion_time[1] =  total_time;
	tat[1] = completion_time[1] - arrival_time[1];
	wt[1] = tat[1] - burst_time[1];
	total_time += 2;


	//p3 is executing
	printf("\np3 is executing");
	final_burst_time[2] = 0;
	total_time += burst_time[2];
	completion_time[2] =  total_time;
    tat[2] = completion_time[2] - arrival_time[2];
	wt[2] = tat[2] - burst_time[2];
	total_time += 2;

	//p5 is executing
	printf("\np5 is executing");
	final_burst_time[4] = 0;
	total_time += burst_time[4];
	completion_time[4] =  total_time;
    tat[4] = completion_time[4] - arrival_time[4];
	wt[4] = tat[4] - burst_time[4];
	total_time += 2;

		//p6 is executing
	printf("\np6 is executing");
	final_burst_time[5] = 0;
	total_time += burst_time[5];
	completion_time[5] =  total_time;
    tat[5] = completion_time[5] - arrival_time[5];
	wt[5] = tat[5] - burst_time[5];
	total_time += 2;

			//p10 is executing
	printf("\np10 is executing");
	final_burst_time[9] = 0;
	total_time += burst_time[9];
	completion_time[9] =  total_time;
    tat[9] = completion_time[9] - arrival_time[9];
	wt[9] = tat[9] - burst_time[9];
	total_time += 2;

				//p7 is executing
	printf("\np7 is executing");
	final_burst_time[6] = 0;
	total_time += burst_time[6];
	completion_time[6] =  total_time ;
    tat[6] = completion_time[6] - arrival_time[6];
	wt[6] = tat[6] - burst_time[6];
	total_time += 2;

				//p8 is executing
	printf("\np8 is executing");
	final_burst_time[7] = 0;
	total_time += burst_time[7];
	completion_time[7] =  total_time;
    tat[7] = completion_time[7] - arrival_time[7];
	wt[7] = tat[7] - burst_time[7];
	total_time += 2;

					//p4 is executing
	printf("\np4 is executing");
	final_burst_time[3] = 0;
	total_time += burst_time[3];
	completion_time[3] =  total_time;
    tat[3] = completion_time[3] - arrival_time[3];
	wt[3] = tat[3] - burst_time[3];
	total_time += 2;

	//p9 is executing
	printf("\np9 is executing");
	final_burst_time[8] = 0;
	total_time += burst_time[8];
	completion_time[8] =  total_time;
    tat[8] = completion_time[8] - arrival_time[8];
	wt[8] = tat[8] - burst_time[8];


	printf("\nProcess AT  BT   CT   TAT     WT\n");
	for(int i = 0; i < 10; i++)
	{
		printf("\np[%d]   %d     %d     %d    %d     %d\n", process[i], arrival_time[i], final_burst_time[i], completion_time[i], tat[i], wt[i]);
	}

    for(int i = 0; i < 10; i++)
    {
        avgtat += tat[i];
        avgwt  += wt[i];
    }

    printf("\nAverage turnaround time = %.2f\n", avgtat/10.0);
    printf("\nAverage waiting time = %.2f\n", avgwt/10.0);


}
