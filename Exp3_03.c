#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char dept[30];
    float salary;
};

int inputEmployee(struct Employee *e) {
    printf("Enter Name: ");
    scanf("%s", e->name);

    printf("Enter ID: ");
    scanf("%d", &e->id);

    printf("Enter Department: ");
    scanf("%s", e->dept);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);

    return 0;  // because return type is int
}

int displayEmployee(struct Employee e) {
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Department: %s\n", e.dept);
    printf("Salary: %.2f\n", e.salary);

    return 0;  // required since return type is int
}

int main() {
    struct Employee emp;

    inputEmployee(&emp);
    displayEmployee(emp);

    return 0;
}
