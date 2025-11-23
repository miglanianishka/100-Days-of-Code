//Q91: Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[200], result[200];
    int j = 0;
    printf("enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u' &&
            c!='A' && c!='E' && c!='I' && c!='O' && c!='U') {
            result[j++] = c;
        }
    }

    result[j] = 0;
    printf("%s", result);

    return 0;
}
