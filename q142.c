//Q142: Store details of 5 students in an array of structures and print all.
#include <stdio.h>

enum StudentIndex {STUDENT1, STUDENT2, STUDENT3, STUDENT4, STUDENT5};

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    for(int i = STUDENT1; i <= STUDENT5; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for(int i = STUDENT1; i <= STUDENT5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}

