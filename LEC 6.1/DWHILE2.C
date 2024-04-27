#include<stdio.h>
#include<conio.h>

main()
{
	int a=10,n;
	clrscr();

	printf("Enter n : ");
	scanf("%d",&n);

	while(a>=n)
	{
		printf("%d ",a);
		a--;

	}
	getch();
}