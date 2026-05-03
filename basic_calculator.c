#include <stdio.h>
int main(){
    float x,y;
    char symbol;
    printf("enter num1: ");
    scanf("%f", &x);
    printf("enter num2: ");
    scanf("%f", &y);
    // Enter the symbol
    printf("enter Symbol: ");
    scanf(" %c", &symbol); 
    if (symbol=='+'){
    printf("Addition: %f", x+y);}
    else if (symbol=='-'){
    printf("Subtraction: %f", x-y);}
    else if (symbol=='*'){
    printf("Multiplication: %f", x*y);}
    else if (symbol=='/'){
        if (y==0){
            printf("Zero in the denominator");
        }
        else{
            printf("Division: %f", x/y);
        }
    }
    return 0;
}