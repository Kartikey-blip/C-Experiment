#include <stdio.h>

float calculateSalary(float basic, int city) {
    float hra, da;

    if(city == 1)
        hra = basic * 0.15;    
    else
        hra = basic * 0.10;    

    da = basic * 0.05;

    return basic + hra + da;
    
}

int main() {
    float basic, salary;
    int city;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter City (1 = Metro, 0 = Non-Metro): ");
    scanf("%d", &city);

    salary = calculateSalary(basic, city);

    printf("Monthly Salary = %.2f\n", salary);

    return 0;
}
