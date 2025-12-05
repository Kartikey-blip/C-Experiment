//Q. Find the largest among three numbers entered by the user.
#include<stdio.h>
int main(){

    int a , b , c;

    printf("Enter the value of a , b , c :");
    scanf("%d %d %d" , &a , &b , &c);

    if(a>b && a>c){
        printf("a is th greatest");
    }else if(b>a && b>c){
        printf("b is greatest");
    }else if(c>a && c>b){
        printf("c is the greatest");
    }

    return 0;
}