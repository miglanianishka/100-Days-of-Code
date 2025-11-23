//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    int j = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);   

    int n = strlen(str);

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == 0) {
          
            for (int k = j - 1; k >= 0; k--)
                printf("%c", word[k]);

            if (str[i] == ' ')
                printf(" ");

            j = 0;  
        } 
        else {
            word[j++] = str[i];
        }
    }

    return 0;
}
