#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5], topStudent;
    int n = 5;

    for(int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    topStudent = students[0];
    for(int i = 1; i < n; i++) {
        if(students[i].marks > topStudent.marks)
            topStudent = students[i];
    }

    printf("Student with highest marks:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}
