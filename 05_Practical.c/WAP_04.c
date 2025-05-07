#include <stdio.h>
#define MODE 2

int main()
{
#if MODE == 1
    printf("Mode 1: Performing operation A\n");
    int result = 10 + 5;
    printf("Result of operation A: %d\n", result);
#elif MODE == 2
    printf("Mode 2: Performing operation B\n");
    int result = 20 * 3;
    printf("Result of operation B: %d\n", result);
#else
    printf("Invalid mode selected. Please define MODE as 1 or 2.\n");
#endif
    return 0;
}
