#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);



	printf("\nMod of a and b : %d",a%b);
	printf("\nDiv of a and b : %d",a/b);
	printf("\nMul of a and b : %d",a*b);
	printf("\nSub of a and b : %d",a-b);
	printf("\nSum of a and b : %d",a+b);

	getch();
}