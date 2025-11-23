//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }
    int n = strlen(str1);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str1[i] > str1[j]) {
                char t = str1[i];
                str1[i] = str1[j];
                str1[j] = t;
            }
            if (str2[i] > str2[j]) {
                char t = str2[i];
                str2[i] = str2[j];
                str2[j] = t;
            }
        }
    }

    if (strcmp(str1, str2) == 0)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}


