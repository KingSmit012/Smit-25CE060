
/*aim:find bmi
editor:srushti makrubiya
date:21/07/2025*/
#include<stdio.h>

void main()
{
	float h,w,bmi;
	printf("Enter height in meter : ");
	scanf("%f",&h);
	printf("Enter weight in kilogram: ");
	scanf("%f",&w);
	bmi=w/(h*h);
	printf("BMI is : %.2f",bmi);
	
}