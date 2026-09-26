#include<stdio.h>
#include<string.h>
int main()
{
	int amount,membership,city_status;
	char cod_availability,delivery[20];
	printf("\t\tDELIVERY STATUS\n");
	printf("Enter Your Total Order Amount: ");
	scanf("%d",&amount);
	printf("\nAre You A Premium Customer: (input as 1 or 0): ");
	scanf("%d",&membership);
	printf("\nEnter Your City Limits (input as 1 for within city, 0 for outside) :");
	scanf("%d",&city_status);
	if((amount>3000)&&(membership==1))
	{
		strcpy(delivery,"Free Delivery");	}
	else{
		strcpy(delivery,"Regular Delivery");
	}
	if((amount<50000)&&(city_status==1))
{
	cod_availability='Y';
}
    else{
    	cod_availability='N';
    	printf("BANK TRANSFER");	}
    printf("\nDELIVERY CHARGE STATUS: %s",delivery);
    printf("\nCOD AVAILABILITY: %c",cod_availability);
	}
