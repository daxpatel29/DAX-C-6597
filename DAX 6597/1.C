#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float sum, avg;

    printf("The Marks of Maths out of 100 : ");
    scanf("%d\n", &a);
    printf("The Marks of physics out of 100 : ");
    scanf("%d\n", &b);
    printf("The Marks of English out of 100 :  ");
    scanf("%d\n", &c);
    printf("The Marks of Chemistry out of 100 :  ");
    scanf("%d\n", &d);
    printf("The Marks of Biology out of 100 :  ");
    scanf("%d\n", &e);

    printf("Total Marks : %d\n ", (a + b + c + d + e));
    avg = (a + b + c + d + e) / 5;
    printf(" The Average Marks of the Student is : %f \n ", avg);

    if (avg >= 85)
    {
        printf("A Grade");
    }
    else if (85 > avg >= 75)
    {
        printf("B Grade");
    }
    else if (75 > avg && avg >= 65)
    {
        printf("C Grade");
    }
    else if (65 > avg && avg >= 50)
    {
        printf("D Grade");
    }
    else if (50 > avg && avg >= 35)
    {
        printf("E Grade");
    }
    else
    {
        printf("FAILED ! ");
    }
    return 0;
}