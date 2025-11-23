//Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender {MALE, FEMALE};
struct Person {
    enum Gender gender;
};
int main() {
    struct Person p;
    int choice;

    printf("Enter gender (0-MALE, 1-FEMALE): ");
    scanf("%d", &choice);
    p.gender = choice;

    switch(p.gender) {
        case MALE: 
            printf("Male\n"); 
            break;
        case FEMALE: 
            printf("Female\n"); 
            break;
        default: 
            printf("Invalid input\n");
    }
    return 0;
}

