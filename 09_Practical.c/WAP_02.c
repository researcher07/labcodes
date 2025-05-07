#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *source_file, *destination_file;
    char *buffer;
    long file_size;
    char dest_filename[100];
    char source_filename[100] = "pietaiml";
    
    printf("Enter Destination File Name: ");
    scanf("%s", dest_filename);
    
    source_file = fopen(source_filename, "rb");
    if (source_file == NULL) {
        perror("Error opening source file (pietaiml)");
        return 1;
    }

    fseek(source_file, 0, SEEK_END);
    file_size = ftell(source_file);
    fseek(source_file, 0, SEEK_SET);

    buffer = (char *)malloc(file_size * sizeof(char));
    if (buffer == NULL) {
        perror("Memory allocation failed");
        fclose(source_file);
        return 1;
    }

    fread(buffer, 1, file_size, source_file);
    
    destination_file = fopen(dest_filename, "wb");
    if (destination_file == NULL) {
        perror("Error opening destination file");
        free(buffer);
        fclose(source_file);
        return 1;
    }

    for (long i = file_size - 1; i >= 0; i--) {
        fputc(buffer[i], destination_file);
    }

    printf("File reversed and saved successfully.\n");

    fclose(source_file);
    fclose(destination_file);
    free(buffer);

    return 0;
}
