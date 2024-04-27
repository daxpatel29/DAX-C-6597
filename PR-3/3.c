#include<stdio.h>
#include<conio.h>

main()
{
	int n,l;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	
	l = n%10;
	
	while(n > 9)
	{
		n = n/10;
	}
	
	printf("\nSum of first and last digit : %d",n + l);
	getch();
}
