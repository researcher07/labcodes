#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], ch;

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file! Make sure the file exists.\n");
        return 1;
    }

    printf("\nContents of '%s':\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
