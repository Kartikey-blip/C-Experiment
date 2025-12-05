#include <stdio.h>


int num = 10;

void display() {
    printf("Inside display(): num = %d\n", num);
}

void changeValue() {
    num = 20;  
    printf("Inside changeValue(): num changed to %d\n", num);
}

int main() {
    printf("Inside main(): num = %d\n", num);

    display();      
    changeValue();  
    display();      

    return 0;
}
