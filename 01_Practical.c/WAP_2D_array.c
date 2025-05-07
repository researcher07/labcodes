 #include <stdio.h>
#include <stdlib.h>

void resize_2D_array(int ***arr, int *rows, int *cols, int new_rows, int new_cols)
{
    int **new_arr = (int **)malloc(new_rows * sizeof(int *));
    for (int i = 0; i < new_rows; i++)
    {
        new_arr[i] = (int *)malloc(new_cols * sizeof(int));
    }

    for (int i = 0; i < new_rows; i++)
    {
        for (int j = 0; j < new_cols; j++)
        {
            if (i < *rows && j < *cols)
                new_arr[i][j] = (*arr)[i][j];
            else
                new_arr[i][j] = 0; // initialize new elements
        }
    }

    // Free old memory
    for (int i = 0; i < *rows; i++)
    {
        free((*arr)[i]);
    }
    free(*arr);

    *arr = new_arr;
    *rows = new_rows;
    *cols = new_cols;
}

void print_2D_array(int **arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **arr;
    int rows = 3, cols = 4;

    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Initialize
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = i * cols + j + 1;

    printf("Original array:\n");
    print_2D_array(arr, rows, cols);

    // Increase size
    resize_2D_array(&arr, &rows, &cols, 4, 5);
    printf("Array after increasing size:\n");
    print_2D_array(arr, rows, cols);

    // Decrease size
    resize_2D_array(&arr, &rows, &cols, 2, 3);
    printf("Array after decreasing size:\n");
    print_2D_array(arr, rows, cols);

    // Free memory
    for (int i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);

    return 0;
}
