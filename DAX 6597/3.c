#include<stdio.h>

int inputsize();
void inputelet(int n,int a[]);

void main()
{
	int size;
	printf("Enter Array Size : ");
	size = inputsize();
	int a[size];
	inputelet(size,a);
}

int inputsize()
{
	int n,i;
	scanf("%d",&n);
	return n;
}

void inputelet(int n,int a[])
{
	printf("\n\nARRAY INPUT\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter a[i] : ");
		scanf("%d",&a[i]);		
	}	
}



