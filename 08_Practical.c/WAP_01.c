#include <stdio.h>

int main() {
    FILE *file;
    char userInput[100];

    file = fopen("user_input.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter some text to write to the file: ");
    fgets(userInput, sizeof(userInput), stdin);

    fprintf(file, "%s", userInput);

    fclose(file);
    printf("Data has been written to 'user_input.txt'.\n");

    return 0;
}
