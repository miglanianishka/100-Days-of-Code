//Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

enum StudentIndex {STUDENT1};

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student students[1];
    enum StudentIndex i = STUDENT1;

    printf("Enter name, roll number, marks for student: ");
    scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);

    printStudent(students[i]);

    return 0;
}
