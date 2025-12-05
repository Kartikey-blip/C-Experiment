#include <stdio.h>

int displayStudent(char name[], int roll, float marks) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Marks: %.2f\n", marks);

    return 0;  
}

int main() {
    char name[50];
    int roll;
    float marks;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    displayStudent(name, roll, marks);

    return 0;
}
