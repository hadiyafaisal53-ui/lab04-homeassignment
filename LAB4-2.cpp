#include<stdio.h>
int main()
{
	int attend_rate,hrs_work,wage;
	printf("Enter Your Attemdence Rating (1-5): ");
	scanf("%d",&attend_rate);
	printf("\nEnter Hours Worked: ");
	scanf("%d",&hrs_work);
	if(hrs_work<=8)
	{
		wage=hrs_work*500;
		printf("\nDAILY WAGE: Rs.%d",wage);
	}
	else if(hrs_work>8)
	{
		if(attend_rate>=3)
		{
			wage=(500*8)+(hrs_work-8)*1.5*500;
			printf("\nDAILY WAGE: Rs.%d",wage);
		}
		else{
		wage=500*hrs_work;
		printf("\nNO OVERTIME WAGE\nDAILY WAGE: Rs.%d",wage);
		}
	}
}
