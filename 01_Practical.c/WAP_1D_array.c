#include <stdio.h>
#include <stdlib.h>

// Write a c program to increase or decrease the existing size of an 1D array.
void resize_array(int **arr, int *size, int new_size)
{
    int *new_arr = (int *)malloc(new_size * sizeof(int));

    // Copy existing values
    for (int i = 0; i < *size && i < new_size; i++)
    {
        new_arr[i] = (*arr)[i];
    }

    // Initialize new elements to 0 if increasing size
    if (new_size > *size)
    {
        for (int i = *size; i < new_size; i++)
        {
            new_arr[i] = 0;
        }
    }
    free(*arr);
    *arr = new_arr;
    *size = new_size;
}
int main()
{
    int *arr;
    int size = 5;
    // Allocate memory for the initial array
    arr = malloc(size * sizeof(int));

    // Initialize the array with some values
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    printf("Original array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Increase the size of the array
    resize_array(&arr, &size, 10);
    printf("Array after increasing size:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Decrease the size of the array
    resize_array(&arr, &size, 4);
    printf("Array after decreasing size:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Free the memory of the array
    free(arr);

    return 0;
}