#include <stdio.h>
#include <stdlib.h>

void readSpecificLine(FILE *file, int lineNumber) {
    char buffer[1024];
    int currentLine = 1;
    rewind(file);  // Ensure we start from the beginning of the file
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        if (currentLine == lineNumber) {
            printf("Line %d: %s", lineNumber, buffer);
            return;  // No need to return anything, just exit the function
        }
        currentLine++;
    }
    printf("Error: Line number %d does not exist in the file.\n", lineNumber);
}

int main() {
    FILE *file;
    char filename[100];
    int lineNumber;
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file! Make sure the file exists.\n");
        return 1;
    }
    printf("Enter the line number to read: ");
    scanf("%d", &lineNumber);
    readSpecificLine(file, lineNumber);
    fclose(file);
    return 0;
}
