#include<stdio.h>
int main(){
    int a,b,result;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a==b){
        result = (a+b)*3;
    }
    else if(a!=b){
        result = a+b;
    }
    printf("%d",result);
    return 0;
}