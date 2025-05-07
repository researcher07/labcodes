#include <stdio.h>
int main()
{
    int num = 10; 
    int *ptr = &num;
    printf("Value of pointer: %d\n",*ptr); 
    *ptr = 20; 
    printf("Modified of pointer: %d\n",*ptr);
    printf("Value of num directly: %d\n", num);
    return 0;
}