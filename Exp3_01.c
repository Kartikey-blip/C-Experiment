#include<stdio.h>
int main(){

    float area , radius ;
    float pi = 3.14;

    printf("Enter the radius: ");
    scanf("%f" , &radius );

    area = pi * radius * radius ;

    printf("%.2f\n" , area);

    return 0;

}