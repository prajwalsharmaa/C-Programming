#include <stdio.h>

int main() {
    int n, i, j, k;
     printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i = n; i >= 1; i--) {
        
        for(j = i; j < n; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2*i-1); k++) {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}