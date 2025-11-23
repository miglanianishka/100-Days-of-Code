//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch, prev = ' ';

    // Open input and output files
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

  
    while ((ch = fgetc(inputFile)) != EOF) {
        
        if (prev == ' ' && isalpha(ch)) {
            ch = toupper(ch);
        } else {
            ch = ch; 
        }    
        fputc(ch, outputFile);
        prev = ch;
    }

    printf("Sentence case conversion done. Check output.txt\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

