#include <stdio.h>
#include <math.h>
int main(){
    float p,t,r,n,ci,a;
    printf("Enter Principal Amount :");
    scanf("%f",&p);
    printf("Enter Time :");
    scanf("%f",&t);
    printf("Enter Rate :");
    scanf("%f",&r);
    printf("Enter No. of times interest applied per time period :");
    scanf("%f",&n);
    a = 1 + r/100;
    ci = p *(pow (a,n))- p;
    printf("The Compound Interest is %.2f",ci);
}