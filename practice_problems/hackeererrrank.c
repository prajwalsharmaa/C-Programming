#include <stdio.h>

int main() {
    char t[100];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", t);

    printf("You entered: %s\n", t);

    return 0;
}
