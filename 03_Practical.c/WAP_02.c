#include <stdio.h>
void swap(int*a,int*b,int*c){
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = *a;
    temp = *c;
}
int main()
{
    int x, y, z;
    printf("Enter first numbers: ");
    scanf("%d", &x);
    printf("Enter second numbers: ");
    scanf("%d", &y);
    printf("Enter third numbers: ");
    scanf("%d", &z);
    printf("Before swap: x = %d, y = %d , z = %d \n", x, y,z);
    // Call the swap function
    swap(&x, &y,&z);
    // Print the swapped values
    printf("After swap: x = %d, y = %d z = %d\n", x, y,z);
    return 0;
}