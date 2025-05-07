#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    union Data data;

    data.intValue = 10;
    printf("Integer Value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Float Value: %.2f\n", data.floatValue);

    data.charValue = 'A';
    printf("Character Value: %c\n", data.charValue);

    return 0;
}
