#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = SQUARE(number);
    printf("The square of %d is: %d\n", number, result);
    return 0;
}
