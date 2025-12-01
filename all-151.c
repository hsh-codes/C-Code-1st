#include <stdio.h>

struct Employee {
    char name[100];
    int emp_id;
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;

    printf("Enter employee name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    fp = fopen("employee.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee data saved to employee.dat\n");

    fp = fopen("employee.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Employee readEmp;
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nRead Employee Data:\n");
    printf("Name: %s\n", readEmp.name);
    printf("ID: %d\n", readEmp.emp_id);
    printf("Salary: %.2f\n", readEmp.salary);

    return 0;
}
