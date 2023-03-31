#include <stdio.h>

union data {
    int i;
    float f;
};

int main() {
    union data myData;
    int choice;

    printf("Enter 1 for integer or 2 for float: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter an integer: ");
        scanf("%d", &myData.i);
        printf("You entered: %d\n", myData.i);
    } else if (choice == 2) {
        printf("Enter a float: ");
        scanf("%f", &myData.f);
        printf("You entered: %f\n", myData.f);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
#include <stdio.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student myStudent;

    printf("Enter student name: ");
    scanf("%s", myStudent.name);

    printf("Enter student GPA: ");
    scanf("%f", &myStudent.gpa);

    printf("Student Name: %s\n", myStudent.name);
    printf("Student GPA: %.2f\n", myStudent.gpa);

    return 0;
}

