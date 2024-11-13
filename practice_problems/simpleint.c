#include <stdio.h>
int main(){
    float p,t,r,i;
    printf("Principal\n");
    scanf("%f",&p);
    printf("Time:\n");
    scanf("%f", &t);
    printf("Rate:\n");
    scanf("%f", &r);
     i = (p*t*r)/100;
    printf("Simple interest is %0.2f\n",i);
    return 0;
}