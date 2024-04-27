#include<stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("demo1.txt","w");
    fprintf(fp,"!! File Demo !!"); 
    fclose(fp);
}