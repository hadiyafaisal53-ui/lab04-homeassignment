#include<stdio.h>
int main()
{
	int temp,pressure;
	printf("ENTER TEMPERATURE:");
	scanf("%d",&temp);
	printf("\nEnter Pressure: ");
	scanf("%d",&pressure);
	if((temp>100)||(pressure>250))
	{
		printf("\nFACTORY MACHINE SHUT DOWN");
	}
	else if((temp>=85 && temp<100) && (pressure>=200 && pressure<250)){
		printf("\nWARNING MODE");
	}
	else{
		printf("\nUNDER CONTROL");
	}
 } 
