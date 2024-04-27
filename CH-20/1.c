#include<stdio.h>

struct std
{
	int s_id;
	char s_name[20];
	int s_age;
	char s_course[20];
	char s_city[20];
	int s_standard;
	char s_school[50];
};

void main()
{
	struct std s1[3];
	
	printf("-- INPUT STUDENT DATA --\n");
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n\nEnter Student Id\t: ");
		scanf("%d",&s1[i].s_id);
		fflush(stdin);
		printf("Enter Student Name\t: ");
		scanf("%[^\n]",&s1[i].s_name);
		printf("Enter Student Age\t: ");
		scanf("%d",&s1[i].s_age);
		fflush(stdin);
		printf("Enter Student Course\t: ");
		scanf("%[^\n]",&s1[i].s_course);
		fflush(stdin);
		printf("Enter Student City\t: ");
		scanf("%[^\n]",&s1[i].s_city);
		printf("Enter Student Standard\t: ");
		scanf("%d",&s1[i].s_standard);
		fflush(stdin);
		printf("Enter Student School\t: ");
		scanf("%[^\n]",&s1[i].s_school);
	}
	system("cls");
	
	printf("\n\n\t\t--STUDENT DATA --");
	printf("\n\nID\tNAME\t\tAGE\tCOURSE\t\tCITY\t\tSTANDARD\t\tSCHOOL\n\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t\t%d\t%s\t%s\t\t%d\t\t%s\n\n",s1[i].s_id,s1[i].s_name,s1[i].s_age,s1[i].s_course,s1[i].s_city,s1[i].s_standard,s1[i].s_school);
	}
}