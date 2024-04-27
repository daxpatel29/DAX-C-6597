#include<stdio.h>

struct m_s
{
	int roll_no,total,chem_marks,maths_marks,phy_marks;
	char name[20];
	float per;
};

void main()
{
	struct m_s ms[5];
	
	int i;
	
	printf("\n\n\t-- INPUT DATA--\n\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Details Of Student : %d\n",i+1);
		printf("Enter Student Roll No\t\t: ");
		scanf("%d",&ms[i].roll_no);
		fflush(stdin);
		printf("Enter Student Name\t\t: ");
		gets(&ms[i].name);
		printf("Enter Physics Marks\t\t: ");
		scanf("%d",&ms[i].phy_marks);
		printf("Enter Chemisrty Marks\t\t: ");
		scanf("%d",&ms[i].chem_marks);
		printf("Enter  Mathematics Marks\t: ");
		scanf("%d",&ms[i].maths_marks);
		
		ms[i].total = ms[i].phy_marks + ms[i].chem_marks + ms[i].maths_marks;
		ms[i].per = ms[i].total/3;
		printf("\n\n");
	}
	
	system("cls");
	
	printf("\t-- STUDENT DATA --\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("%s(%d)\n",ms[i].name,ms[i].roll_no);
		printf("Physics\t\t=> %d\n",ms[i].phy_marks);
		printf("Chemisrty\t=> %d\n",ms[i].chem_marks);
		printf("Mathematics\t=> %d\n",ms[i].maths_marks);
		printf("Total\t\t=> %d/300\n",ms[i].total);
		printf("Percent\t\t=> %.2f\n",ms[i].per);
		printf("\n\n");
	}
	
}