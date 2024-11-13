#include <stdio.h>

int main() {
    int n, i, j, k;
    
    // Number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for(k = 1; k <= (2*i-1); k++) {
            printf("1");
        }
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}