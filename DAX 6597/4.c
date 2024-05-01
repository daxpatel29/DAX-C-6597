#include <stdio.h>

void main()
{
    int size, i;
    printf("Enter Size Of Array : ");
    scanf("%d", &size);
    int a[size];
    int *ptr[size];

    printf("-- Array Input --\n");

    for (i = 0; i < size; i++)
    {
        printf("Enter A[%d] : ", i);
        scanf("%d", &a[i]);
        ptr[i] = &a[i];
    }

    for (i = 0; i < size; i++)
    {
        *ptr[i] *= *ptr[i];
    }
    if (a[i] % 2 == 0)
    {

        printf(" %d\n", a[i]);
    }
}