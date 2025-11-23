//Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];

    printf("Enter name: ");
    scanf("%[^\n]s", name);  
    printf("%c.", name[0]);
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ' && name[i+1] != '\0')
            printf("%c.", name[i+1]);
    }

    return 0;
}
