//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    printf("enter string: ");
    scanf("%s", str);

   
    for (int i = 0; str[i] != 0 ; i++) {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;

            if (freq[c - 'a'] == 2) {
                printf("%c", c);
                return 0;
            }
        }
    }

    printf("-1");
    return 0;
}

