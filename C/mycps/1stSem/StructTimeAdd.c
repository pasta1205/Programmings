#include<stdio.h>

typedef struct TIME
{
	int hour;
	int minute;
	int second;
}time;

time Addtime(time t1,time t2)
{
	time result;
        result.hour = t1.hour + t2.hour;
        result.minute = t1.minute + t2.minute;
        result.second = t1.second + t2.second;
	if(result.second > 60)
	{
        	result.minute = t1.minute + t2.minute + result.second/60;	
		result.hour = t1.hour + t2.hour + result.minute/60;
	
		result.minute %= 60;
        	result.second %= 60;
	}
	return result;
}

int main()
{
	time t1, t2, t3;
	printf("Enter the 1st Time(HH MM SS):");
	scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);

        printf("Enter the 2nd Time(HH MM SS):");
	scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);

	t3 = Addtime(t1, t2);

	printf("Added Time: %2d:%2d:%2d\n",t3.hour,t3.minute,t3.second);
}
