#include<stdio.h>
int main()
{
	int people;
	float comb_weight;
	printf("\nEnter Total People Entering The Elevator: ");
	scanf("%d",&people);
	printf("\nEnter People's combined weight: ");
	scanf("%f",&comb_weight);
	if(people<=10)
	{
		if(comb_weight>1000)
		{
			printf("\nENTRY DENIED DUE TO OVERWEIGHT");
		}
		else
		{
			printf("\nENTRY ALLOWED");
		}}
	else{
		printf("ENTRY DENIED DUE TO EXCEEDING PEOPLE LIMIT");
	}
}
