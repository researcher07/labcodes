#include <stdio.h>
// Function Call by Value
void callByValue(int a)
{
    a = a * 2; 
    printf("Inside callByValue: a = %d\n", a);
}

void callByReference(int *a)
{
    *a = *a * 2;
    printf("Inside callByReference: *a = %d\n", *a);
}
int main()
{
    int num = 5;
    printf("Original value of num: %d\n", num);
    // Call by Value
    callByValue(num);
    printf("After callByValue, num = %d (no change)\n\n", num);
    // Call by Reference
    callByReference(&num);
    printf("After callByReference, num = %d (changed)\n", num); 
    return 0;
}