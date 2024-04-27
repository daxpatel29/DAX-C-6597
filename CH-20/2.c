#include<stdio.h>

struct emp
{
	int emp_id;
 	char emp_name[20];
 	int emp_age;
 	char emp_role[30];
 	char emp_city[20];
 	int emp_exp;
 	char emp_company_name[20];
};

void main()
{
	int n,i;
	printf("Enter Number Of Employee : ");
	scanf("%d",&n);
	struct emp e1[n];
	
	printf("\n\n-- INPUT DATA --\n\n");
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter Employee Id\t\t: ");
		scanf("%d",&e1[i].emp_id);
		fflush(stdin);
		printf("Enter Employee Name\t\t: ");
		scanf("%[^\n]",&e1[i].emp_name);
		printf("Enter Employee Age\t\t: ");
		scanf("%d",&e1[i].emp_age);
		fflush(stdin);
		printf("Enter Employee Role\t\t: ");
		scanf("%[^\n]",&e1[i].emp_role);
		fflush(stdin);
		printf("Enter Employee City\t\t: ");
		scanf("%[^\n]",&e1[i].emp_city);
		printf("Enter Employee Experience\t: ");
		scanf("%d",&e1[i].emp_exp);
		fflush(stdin);
		printf("Enter Employee Company Name\t: ");
		scanf("%[^\n]",&e1[i].emp_company_name);
	}
	
	system("cls");
	
	printf("\n\n\t\t-- EMPLOYEE DATA --\n\n");
	printf("ID\tNAME\tAGE\tROLE\t\tCITY\tEXPERIENCE(year)\tCMP_NAME\n");
	printf("--\t----\t---\t----\t\t----\t----------------\t--------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t\t%d\t\t%s\n",e1[i].emp_id,e1[i].emp_name,e1[i].emp_age,e1[i].emp_role,e1[i].emp_city,e1[i].emp_exp,e1[i].emp_company_name);
	}
}