#include <stdio.h>
int main(){
    int n = 5;
    // printf("The value of n is: %d \n",n);
    // printf("Pre Increment value of n is: %d\n",++n);
    // printf("Post Increment value of n is: %d\n",n++);
    // printf("Pre Decrement value of n is: %d\n",--n);
    printf("Post Decrement value of n is: %d\n",n++);
    printf("Post Decrement value of n is: %d\n",n++);
    printf("Post Decrement value of n is: %d\n",n);
    printf("Post Decrement value of n is: %d\n",n);
    return 0;
}