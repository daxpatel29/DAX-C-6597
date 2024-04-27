#include<stdio.h>

int cube(int *ptr)
{
	return (*ptr)*(*ptr)*(*ptr);
}

void main()
{
	int r,c,i,j;
	printf("Enter Row : ");
	scanf("%d",&r);
	printf("Enter Column : ");
	scanf("%d",&c);
	int a[r][c];

	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n-- ARRAY CUBE --\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : %d\n",i,j,cube(&a[i][j]));
		}
	}


}