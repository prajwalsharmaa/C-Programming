#include<stdio.h>
int main(){
    // int i;
    // int sum=0;
    // for(i=1;i<=100;i++){
    //    if(i%3==0 && i%5!=0){
    //     sum +=i;
    //    }
    // }
    // printf("%d",sum);
    // return 0;
    // int i;
    // int sum=0;
    // for(i=1;i<=10;i++){
    //    if(i%3==0 || i%5!=0){
    //     sum +=i;
    //    }
    // }
    // printf("%d",sum);
    int n,i;
    printf("Upto:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
       if(i%3==0){
        printf("fizz\n");
       }
       else if(i%5==0){
        printf("buzz\n");
       }
       else if(i%3==0 && i%5==0){
        printf("fizzbuzz\n");
       }
    }
    return 0;
}