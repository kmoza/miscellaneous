#include<stdio.h>
#include<stdlib.h>

int main()
{
    char* ptr1 = (char*)malloc(10);
    int* ptr2 = (int*)calloc(10, sizeof(int));

    float* ptr3 = (float*)calloc(15, sizeof(float));
    free(ptr2);
    return 0;
}
