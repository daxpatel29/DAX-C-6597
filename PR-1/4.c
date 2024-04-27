#include<stdio.h>
#include<conio.h>

main()
{
	int A,B;
	clrscr();
	
	printf("Enter value of A : ");
	scanf("%d",&A);
	printf("Enter value of B : ");
	scanf("%d",&B);
	
	A = A^B;
	B = B^A;
	A = A^B;
	
	printf("\nA : %d",A);
	printf("\nB : %d",B);

	getch();
}

