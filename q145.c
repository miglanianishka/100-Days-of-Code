//Q145: Return a structure containing top student's details from a function.
#include <stdio.h>

enum StudentIndex {STUDENT1, STUDENT2, STUDENT3};

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

struct Student getTopper(struct Student students[], int n) {
    int i;
    int topperIndex = 0;
    for(i = 0; i < n; i++) {
        if(students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }
    return students[topperIndex];
}

int main() {
    struct Student students[3], topper;
    enum StudentIndex i;

    for(i = STUDENT1; i <= STUDENT3; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    topper = getTopper(students, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}
