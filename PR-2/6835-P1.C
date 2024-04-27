#include<stdio.h>
#include<conio.h>

main()
{
	char x;
	clrscr();

	printf("Enter x : ");
	scanf("%c",&x);

	if(x >= '0' && x <= '9')
	{
		printf("%c is a Digit",x);
	}
	else if(x >= 'a' && x <= 'z')
	{
		printf("%c is an Alphabet",x);
	}
	else if(x >= 'A' && x <= 'Z')
	{
		printf("%c is an Alphabet",x);
	}
	else
	{
		printf("%c is a special character",x);
	}

	getch();
}