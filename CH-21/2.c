
#include<stdio.h>
#define p printf
#define s scanf

void main()
{
    FILE *fp;
    int i;
    
    fp = fopen("demo2.txt","w");
    
    fprintf(fp,"NUMBERS THAT ARE DIVISIBLE BY BOTH 3 & 5 BETWEEN 1 TO 50 : ");
    for (i = 1; i <= 50; i++)
    {
        if (i%3==0 && i%5==0)
        {
            fprintf(fp,"%d,",i);
        }
    }
    
    fclose(fp);

}
