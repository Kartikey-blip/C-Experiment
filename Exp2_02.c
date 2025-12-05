//Q. Find all roots of a quadratic equation ax² + bx + c = 0.

#include<stdio.h>
#include<math.h>

int main(){

    float a , b , c ,d , root1 ,root2 ;

    printf("Enter the values of a , b , c: ");
    scanf("%f %f %f" , &a , &b ,&c);

    d = (b*b) - (4*a*c) ;

    if(d>0){
        root1= ((-b)+ sqrt(d)) / (2*a) ;
        root2= ((-b)- sqrt(d)) /(2*a) ;

        printf("Roots are %.2f and %.2f" , root1 , root2);
        
    }else if(d==0){

        root1 = root2 = (-b)/(2*a) ;
        printf("The equal roots are %.2f and %.2f" , root1 , root2);
    }else{

        float real = (-b) / (2*a);
        float imaginary = sqrt(-d) / (2*a);

        printf("Roots are complex : %.2f + %.2fi and %.2f - %.2fi\n" , real , imaginary ,real , imaginary);

        
    }
    return 0 ;


}