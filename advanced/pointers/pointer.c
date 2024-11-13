#include<stdio.h>
int main(){
    int a = 76;
    int *ptra = &a;
    printf("The value of a is %d\n",a);
    printf("The value of address of a is %p\n",&a);
    printf("The value of pointer is %p\n",ptra);
    printf("The address of pointer to a is %p\n",&ptra);
    *ptra = 80;
    printf("New value of a is %d\n",a);
    printf("New value of a is %d",*ptra);
    return 0;
}

