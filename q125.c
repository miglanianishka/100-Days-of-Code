//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    char filename[100], text[500];
    FILE *file;

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fputs(text, file);
    fclose(file);
    printf("File updated successfully with appended text.\n");
    return 0;
}

