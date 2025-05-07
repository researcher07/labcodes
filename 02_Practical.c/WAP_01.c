#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n = 10; // size of array..
    // using malloc
    int *arr_malloc = (int *)malloc(n * sizeof(int));
    if (arr_malloc == NULL)
    {
        fprintf(stderr, "Memory allocation failed using malloc\n");
        return 1;
    }
    // using calloc
    int *arr_calloc = (int *)calloc(n, sizeof(int));
    if (arr_calloc == NULL)
    {
        fprintf(stderr, "Memory allocation failed using calloc\n");
        free(arr_malloc); // Free previously allocated memory
        return 1;
    }
    // Print uninitialized values from malloc
    printf("Uninitialized values from malloc:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr_malloc[%d] = %d\n", i, i);
    }
    // Print initialized values from calloc
    printf("\nInitialized values from calloc:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr_calloc[%d] = %d\n", i, arr_calloc[i]);
    }
    // Free allocated memory
    free(arr_malloc);
    free(arr_calloc);
    return 0;
}