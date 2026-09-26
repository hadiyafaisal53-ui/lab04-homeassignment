#include<stdio.h>
int main()
{
	int faminc;
	float CGPA;
	printf("\nEnter Your CGPA:");
	scanf("%f",&CGPA);
	printf("\nEnter Your Family Income: ");
	scanf("%d",&faminc);
	if((CGPA>3.7) && (faminc<50000))
	{
		printf("\nFULL BRIGHT SCHOLARSHIP");
	}
	else if((CGPA>3.3) && (faminc<100000))
	{
		printf("\nHALF SCHOLARSHIP");
	}
	else{
		printf("\nNO SCHOLARSHIP AWARDED");
	}
}
