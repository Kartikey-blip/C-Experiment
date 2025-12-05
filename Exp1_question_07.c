#include <stdio.h>

int main() {
    char brand[] = "Apple";
    char model[] = "16 Pro";
    char color[] = "Grey";

    int serial = 987654;
    int battery = 3284;
    float price = 119999.99;

    printf("\n--- Mobile Phone Details ---\n");
    printf("Brand: %s\n", brand);
    printf("Model: %s\n", model);
    printf("Serial Number: %d\n", serial);
    printf("Price: %.2f\n", price);
    printf("Color: %s\n", color);
    printf("Battery: %d mAh\n", battery);

    return 0;
}
