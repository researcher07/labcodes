#include <stdio.h>
#include "my_header.h"
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    //int x = 10, y = 5;
    int x ,y;
    printf("enter x value : ");
    scanf("%d",&x);
    printf("enter y value : ");
    scanf("%d",&y);
    printf("Addition of %d and %d: %d\n", x, y, add(x, y));
    printf("Subtraction of %d and %d: %d\n", x, y, subtract(x, y));
    return 0;
}
