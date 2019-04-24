#include<stdio.h>

int main()
{
    static int a[2][2] = {1,2,3,4};
    int i , j;
    printf("Starting address of array = %u\n", a);
    static int *p[] = {(int*)a, (int*)a+1};
    printf("What is assigned in array p is a = %u, a+1 = %u and a+2 = %u\n", a, a+1, a+2);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d, %d, %d, %d\n", *(*(p+i)+j), *(*(j+p)+i), *(*(i+p)+j), *(*(p+j)+i));
        }
    }

    printf("Size of int = %d", sizeof(int));
    return 0;
}