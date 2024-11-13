#include <stdio.h>
int main(){
    float l,b,c;
    printf("Major axis:\n");
    scanf("%f",&l);
    printf("Minor axis:\n");
    scanf("%f", &b);
     c = 3.14* l*b;
    printf("Area is %f\n",c);
    return 0;
}