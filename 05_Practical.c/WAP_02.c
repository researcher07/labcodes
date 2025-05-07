#include <stdio.h>

#define PERIMETER(length, width) (2 * ((length) + (width)))

int main()
{
    int length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    int perimeter = PERIMETER(length, width);
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    return 0;
}
