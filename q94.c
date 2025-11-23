//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[200], temp[200];
    int j = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);   
    longest[0] = '\0';       

    int n = strlen(str);

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            temp[j] = '\0';   

            if (strlen(temp) > strlen(longest))
                strcpy(longest, temp);

            j = 0;            
        } else {
            temp[j++] = str[i];
        }
    }

    printf("%s", longest);

    return 0;
}
