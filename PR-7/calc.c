#include<stdio.h>

void calc()
{
	int a,b,n;
	
	do
	{
		printf("\n\-------------------------n");
		printf("Press..1 For Addition\n");
		printf("Press..2 For Subtraction\n");
		printf("Press..3 For Multiplication\n");
		printf("Press..4 For Division\n");
		printf("Press..5 For Modulus\n");
		printf("Press..0 For Exit\n");	
		printf("\n\nEnter Your Choice : ");
		scanf("%d",&n);
		
		
		switch(n)
		{
			case 1:
				printf("Enter First Value : ");
				scanf("%d",&a);
				printf("Enter Second Value : ");
			scanf("%d",&b);
			printf("\nAddition Of %d and %d : %d\n\n",a,b,a+b);
			break;
		
			case 2:
				printf("Enter First Value : ");
				scanf("%d",&a);
				printf("Enter Second Value : ");
				scanf("%d",&b);
				printf("\nSubtraction Of %d and %d : %d\n\n",a,b,a-b);
				break;
				
			case 3:
				printf("Enter First Value : ");
				scanf("%d",&a);
				printf("Enter Second Value : ");
				scanf("%d",&b);
				printf("\nMultiplication Of %d and %d : %d\n\n",a,b,a*b);
				break;
				
			case 4:
				printf("Enter First Value : ");
				scanf("%d",&a);
				printf("Enter Second Value : ");
				scanf("%d",&b);
				if(b==0)
				{
					printf("\n!! Cannot divide by 0 !!\n\n");
				}
				else
				{
					printf("\nDivision Of %d and %d : %d\n\n",a,b,a/b);	
				}
				break;
				
			case 5:
				printf("Enter First Value : ");
				scanf("%d",&a);
				printf("Enter Second Value : ");
				scanf("%d",&b);
				printf("\nModulus Of %d and %d : %d\n\n",a,b,a%b);
				break;
				
			case 0:
				printf("-- You Are Exited --");
				break;
				
			default :
				printf("Enter Valid Choice !!\n\n");
		}
	}while(n!=0);
	


	
}
