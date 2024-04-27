#include<stdio.h>
#include<conio.h>

main()
{
	int a=15,n;
	clrscr();

	printf("Enter n : ");
	scanf("%d",&n);

	while(a>=n)
	{       if(a%2!=0)
		printf("%d ",a);
		a--;

	}
	getch();
}