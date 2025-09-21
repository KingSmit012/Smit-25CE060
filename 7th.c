#include<stdio.h>
#include<conio.h>
void main()
{       int age;
	clrscr();
	printf("enter your age");
	scanf("%d",&age);
	age>=12?printf("pay 100 rupees"):printf("free entry");
	getch();

}