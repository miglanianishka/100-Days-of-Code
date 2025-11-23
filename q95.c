//Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, str1); 

   
    for (int i = 0; i < strlen(str1); i++) {
       
        char first = temp[0];

        for (int j = 0; j < strlen(str1) - 1; j++)
            temp[j] = temp[j+1];

        temp[strlen(str1) - 1] = first;

        if (strcmp(temp, str2) == 0) {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not rotation");
    return 0;
}


