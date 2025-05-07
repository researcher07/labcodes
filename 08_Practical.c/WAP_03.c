#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char text_to_append[200];

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");

    // Check if the file was opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Get the text to append from the user
    printf("Enter the text to append: ");
    getchar(); // Consume leftover newline from previous input
    fgets(text_to_append, sizeof(text_to_append), stdin);

    // Remove trailing newline if present
    text_to_append[strcspn(text_to_append, "\n")] = 0;

    // Append the text to the file with a newline
    if (fprintf(file, "%s\n", text_to_append) < 0) {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }

    printf("Text appended successfully.\n");

    // Close the file
    fclose(file);
    return 0;
}
