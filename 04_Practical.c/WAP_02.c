#include <stdio.h>
int main()
{
    int value = 10;
    int *ptr = &value;
    int **ptrToPtr = &ptr;

    printf("Original value: %d\n", value);
    printf("Value through ptr: %d\n", *ptr);
    printf("Value through ptrToPtr: %d\n", **ptrToPtr);

    **ptrToPtr = 20;

    printf("\nAfter modification:\n");
    printf("Original value: %d\n", value);
    printf("Value through ptr: %d\n", *ptr);
    printf("Value through ptrToPtr: %d\n", **ptrToPtr);

    return 0;
}
