#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&a);

	(a%2==0)
		?printf("%d is an even number",a)
		:printf("%d is an odd number",a);

	getch();
}