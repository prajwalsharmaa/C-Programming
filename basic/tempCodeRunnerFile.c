#include <stdio.h>
int main(){
    int *ptr = NULL;
    if (ptr == NULL) {
    printf("Pointer is null.\n");
} else {
    // Safe to dereference
    printf("Pointer is not null, value: %d\n", *ptr);
}
}