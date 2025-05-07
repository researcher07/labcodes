#include <stdio.h>
/*Write a program to demonstrate accessing array elements using pointers.*/
int main()
{

    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;
    printf("Accessing array elements using pointers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element at arr[%d] = %d (Accessed using pointer: %d)\n", i, arr[i], *(ptr + i));
    }
    *(ptr + 1) = 30;
    *(ptr + 3) = 40;
    printf("\nAfter modifying the 2nd and 4th elements using pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}