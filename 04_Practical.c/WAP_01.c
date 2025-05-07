#include <stdio.h>

int main(){
    // Array of pointers to strings (array of string literals)
const char *fruits[] = {
    "Apple",
    "Banana",
    "Cherry",
    "Date",
    "Elderberry",
    "Fig",
    "Grape"
    };
    // Calculate the number of elements in the array
    int numFruits = sizeof(fruits) / sizeof(fruits[0]);
    // Print each string using the array of pointers
    printf("List of fruits:\n");
    for (int i = 0; i < numFruits; i++) {
    printf("%d: %s\n", i + 1, fruits[i]);
    }
    return 0;
}