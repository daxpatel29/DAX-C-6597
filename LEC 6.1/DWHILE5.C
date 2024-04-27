#include<stdio.h>
#include<conio.h>

main()
{
	int a=2020,n;
	clrscr();

	printf("Enter n : ");
	scanf("%d",&n);

	while(a<=n)
	{       if(a%4==0)
		printf("%d ",a);
		a++;

	}
	getch();
}