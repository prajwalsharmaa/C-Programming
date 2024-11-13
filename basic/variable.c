#include <stdio.h>
int main(){
    int globalVariable,localVariable;
    globalVariable = 10;
    localVariable = 20;
    printf("The Global Variable is %d and local variable is %d\n ",globalVariable,localVariable);
    globalVariable = 1;
    localVariable = 2;
    printf("The Global Variable is %d and local variable is %d\n ",globalVariable,localVariable);
}