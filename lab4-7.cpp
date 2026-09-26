#include<stdio.h>
int main()
{
	int choice,mins,bill;
	printf("Enter Your Choice number: \nPlan 1 (Rs. 500 for 1000 minutes), \nPlan 2 (Rs.800 for 2000 minutes), \nPlan 3 (Rs. 1200 for unlimited minutes), \nPlan 4 (custom plan billed at Rs.1/minute):");
	scanf("%d",&choice);
	printf("\nEnter The minutes you used for the call: ");
	scanf("%d",&mins);
	switch(choice)
	{case 1:
			bill=500;
			if(mins>1000)
			{
			bill+=(mins-1000)*2;
			printf("\nBill=Rs. %d",bill);
			}
		    else
		    {printf("\nBiLL=Rs.%d",bill);}
			break;
		case 2:
			bill=800;
			if(mins>2000)
			{
				bill+=(mins-2000)*2;
				printf("\nBill=Rs.%d",bill);
			}else{printf("\nBiLL=Rs.%d",bill);}
			break;
		case 3:
			bill=1200;
			printf("\nBill=%d",bill);
			break;
		case 4:
			bill=mins*1;
			printf("\nBILL=Rs.%d",bill);
			break;}}
