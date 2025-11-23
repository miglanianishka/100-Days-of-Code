//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int lastSpace = -1;

    printf("Enter name: ");
    scanf("%[^\n]s", name);  
    int n = strlen(name);
    for (int i = 0; i < n; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }
    printf("%c.", name[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (name[i] == ' ')
            printf("%c.", name[i + 1]);
    }

    printf(" %s", &name[lastSpace + 1]);
    return 0;
}

