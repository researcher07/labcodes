#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void search_word(const char *filename, const char *word) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    char line[256];
    int line_num = 0, occurrences = 0;

    while (fgets(line, sizeof(line), file)) {
        line_num++;
        char *occurrence = strstr(line, word);
        while (occurrence != NULL) {
            printf("Word '%s' found at line %d, position %ld\n", word, line_num, occurrence - line + 1);
            occurrences++;
            occurrence = strstr(occurrence + strlen(word), word);  // Fix here
        }
    }

    if (occurrences == 0)
        printf("Word '%s' not found.\n", word);
    else
        printf("Total occurrences: %d\n", occurrences);

    fclose(file);
}

int main() {
    search_word("pietaiml", "the");
    return 0;
}
