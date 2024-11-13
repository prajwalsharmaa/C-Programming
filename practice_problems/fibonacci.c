#include <stdio.h>
int main()
   { 
    int a,b,n,i,result;
     a = 1;
     b = 1;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d,",a);
        result = a + b;
        a = b;
        b = result;
    }
      }
