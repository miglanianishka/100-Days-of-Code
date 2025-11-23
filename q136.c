//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum Menu {ADD, SUBTRACT, MULTIPLY};
int main() {
    enum Menu choice;
    int a, b;

    printf("Enter choice (0-ADD, 1-SUBTRACT, 2-MULTIPLY): ");
    scanf("%d", (int*)&choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case ADD: 
            printf("%d\n", a + b); 
            break;
        case SUBTRACT: 
            printf("%d\n", a - b); 
            break;
        case MULTIPLY: 
            printf("%d\n", a * b); 
            break;
        default: 
            printf("Invalid choice\n");
    }
    return 0;
}

