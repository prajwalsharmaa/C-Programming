#include <stdio.h>
int main(){
    double num1, num2;
    char operator;
    printf("Enter expression: ");
    scanf("%lf %c %lf", &num1,&operator,&num2);
    // printf("Enter an operator (+, -, *, /): ");
    // scanf(" %c", &operator); 
    // printf("Enter second number: ");
    // scanf("%lf", &num2);   
    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
}
