#include <stdio.h>

struct TwoIntegers {
    int num1;
    int num2;
};

int calculateSum(struct TwoIntegers values) {
    return values.num1 + values.num2;
}

int main() {
    struct TwoIntegers numbers;

    printf("Enter the first integer: ");
    scanf("%d", &numbers.num1);

    printf("Enter the second integer: ");
    scanf("%d", &numbers.num2);

    int sum = calculateSum(numbers);

    printf("The sum of %d and %d is: %d\n", numbers.num1, numbers.num2, sum);

    return 0;
}
