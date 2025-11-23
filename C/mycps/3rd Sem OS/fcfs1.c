#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the no. of process:");
	scanf("%d",&n);
	int p[n], at[n], bt[n], ct[n], tat[n], wt[n];

	for(i=0; i<n; i++)
	{
		p[i] = i+1;
		printf("Enter the AT and BT value of Process%d:",p[i]);
		scanf("%d %d", &at[i], &bt[i]);
	}

	int sum = at[0], stat=0, swt=0;
	double atat=0, awt=0;
	for(j=0; j<n; j++)
	{
		sum += bt[j];
		ct[j] = sum;
		tat[j] = ct[j] - at[j];
		wt[j] = tat[j] - bt[j];
		stat += tat[j];
		swt += wt[j];
	}

	atat = stat/n;
	awt = swt/n;
	printf("Pid\tAT\tBT\tCT\tTAT\tWT\n");
	for(k=0; k<n; k++)
	{
		printf("P%d\t%d\t%d\t%d\t%d\t%d\n",p[k], at[k], bt[k], ct[k], tat[k], wt[k]);
	}
	printf("Average TAT: %f\n",atat);
	printf("AVerage WT: %f\n",awt);
}

/*Coder: Pasta*/