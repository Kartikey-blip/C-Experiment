#include<stdio.h>
int main(){

    char Book_Title[] = "Harry Potter";
    char Author_name[] = "JK Rowling";
    char Publisher[] = "Owlhouse";

    int ISBN = 123455 ;
    int Publication_Year = 2006 ;
    float Price = 1200.00 ;

    printf("\n--- Book Details ---\n");
    printf("Product Name :%s\n" , Book_Title );
    printf("Product Name :%s\n" , Author_name );
    printf("Product Name :%s\n" , Publisher );
    printf("Product Name :%d\n" , ISBN  );
    printf("Product Name :%d\n" , Publication_Year );
    printf("Product Name :%f\n" , Price );

    return 0;

}