#include <stdio.h>
/*Write a program to dynamically allocate memory
for a string and store a user-entered string.*/
#include <stdlib.h>
int main()
{
    for(int i = 0;i<=10;i++){
    int length;
    char *str;
    printf("Enter the langht of string. : ");
    scanf("%d", &length);
    // Using DMA (+1)
    str = (char *)malloc((length + 1) * sizeof(char));
    if (str == NULL)
    {
        printf("Memory allocation failled!\n");
        return 1;
    }
    getchar();
    printf("Enter a string.");
    fgets(str, length + 1, stdin);
    printf("You entered: %s\n\n", str);
    free(str);
}
    return 0;
}