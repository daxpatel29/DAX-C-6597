#include<stdio.h>

void cube(int a);

void main()
{
	int a;
	
	printf("Enter Any Number : ");
	scanf("%d",&a);	
	cube(a);
}

void cube(int a)
{
	printf("\nCube of %d : %d",a,a*a*a);
}
