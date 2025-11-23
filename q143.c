//Q143: Find and print the student with the highest marks.
#include <stdio.h>

enum StudentIndex {STUDENT1, STUDENT2, STUDENT3};

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[3];
    enum StudentIndex i, topperIndex = STUDENT1;

    for(i = STUDENT1; i <= STUDENT3; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    for(i = STUDENT1; i <= STUDENT3; i++) {
        if(students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topperIndex].name, students[topperIndex].marks);

    return 0;
}

