#include<stdio.h>
#include<conio.h>

main()
{
	char x;
	clrscr();

	printf("Press S for sunday\n");
	printf("Press M for monday\n");
	printf("Press T for tuesday\n");
	printf("Press W for wednesday\n");
	printf("Press t for thursday\n");
	printf("Press F for friday\n");
	printf("Press s for saturday\n");

	printf("\nEnter your choice : ");
	scanf("%c",&x);

	switch(x)
	{
		case 'S':
			printf("Sunday");
			break;
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tusday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thursday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 's':
			printf("Saturday");
			break;
		default:
			printf("Invalid input !!");
	}

	getch();
}