#include<stdio.h>

void main()
{
	FILE *fp1,*fp2;
	
	fp1 = fopen("Even.txt","w");
	fp2 = fopen("Odd.txt","w");
	
	fprintf(fp1,"EVEN NUMBERS BETWEEN 50 TO 70 : ");
	fprintf(fp2,"ODD NUMBERS BETWEEN 50 TO 70 : ");
	int i;
	
	for(i=51;i<=70;i++)
	{
		(i % 2 == 0)
			?fprintf(fp1,"%d,",i)
			:fprintf(fp2,"%d,",i);
	}
	
	fclose(fp1);
	fclose(fp2);
}