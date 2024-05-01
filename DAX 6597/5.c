#include<stdio.h>

struct laptop
{
	
	char name[20];
	char processor[20];
	float price;
};

void main()
{
    int n;
    printf("Enter the numbers of Laptop :");
    scanf("%d",&n);    
	struct laptop l1[n];
	
	printf("-- LAPTOP DATA --\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter Laptop Company Name\t: ");
		scanf("%s",&l1[i].name);
		printf("Enter Processor Name\t: ");
		scanf("%s",&l1[i].processor);
		printf("Enter Price\t: ");
		scanf("%f",&l1[i].price);
		
	}
	
	printf("\n\n\t\t--LAPTOP DATA --");
	printf("\n\nCOMPANY NAME \tPROCESSOR\t\tPRICE\t\n\n");
	for(i=0;i<3;i++)
	{
		printf("%s\t\t%s\t\t%f\t\t\n\n",l1[i].name,l1[i].processor,l1[i].price);
	}
}