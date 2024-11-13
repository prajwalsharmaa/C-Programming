#include<stdio.h>
int main(){ 
    int n;
    printf("Enter the nubmer of rows:");
    scanf("%d",&n); 
    for(int i = n;i >=1; i--){
     for(int j = 1;j<=n-i;j++){
        printf("   ");
     }
     for(int j = i;j>=1;j--){
        printf("%d  ",j%2);
     }
      printf("\n");
    }
    return 0;
}