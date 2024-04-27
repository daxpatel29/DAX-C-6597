#include<stdio.h>

void check(int a);

void main()
{
	int a;
	
	printf("Enter Any Number : ");
	scanf("%d",&a);	
	check(a);
}

void check(int a)
{
	(a%3==0 && a%5==0)
		?printf("\n%d is divisible by both 3 & 5",a)
		:printf("\n%d is not divisible by both 3 & 5",a);
	
}
