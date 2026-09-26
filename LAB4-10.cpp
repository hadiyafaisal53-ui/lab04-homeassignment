#include<stdio.h>
int main()
{
	int zone,zone_lim,speed_lim,fine=1000;
	printf("ZONE TYPE:\n(1 = School Zone, 2 =Highway, 3 = Residential Area): ");
	scanf("%d",&zone);
	printf("\nSPEED LIMIT IN EACH ZONE:\nSchool = 30 km/h\nHighway =100 km/h\nResidential = 50 km/h");
	printf("\n\nEnter Speed Limit applied In the Zone: (km/h): ");
	scanf("%d",&speed_lim);
	switch(zone)
	{
		case 1:
			zone_lim=30;
			if(speed_lim<=30){ fine=0;
			}
			else if(speed_lim>zone_lim+20)
			{
				fine*=2;
			}
			break;
		case 2:
			zone_lim=100;
			if(speed_lim<=100){fine=0;
			}
			else if(speed_lim>zone_lim+20)
			{
				fine*=2;
			}
			break;
		case 3:
			zone_lim=50;
			if(speed_lim<=50){fine=0;
			}
			if(speed_lim>zone_lim+20)
			{
				fine*=2;
			}
			break;
		default:
			printf("\nWRONG ZONE VALUE ENTERED.");
	}
	printf("\nTOTAL FINE = Rs.%d",fine);
}
