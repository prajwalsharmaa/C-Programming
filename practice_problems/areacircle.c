#include <stdio.h>
int main(){
    float r,a;
    const float PI = 3.14 ;
    printf("Radius of circle:\n");
    scanf("%f",&r);
    a = PI*r*r;
    printf("Area is %f\n",a);
    return 0;
}