#include<stdio.h>
int main(){
    int num[] = {34,45,64,23};
    int n;
    int sum =0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        sum += num[i];
    }
    
    printf("total number upto %d term is %d\n",n,sum);
    printf("average upto %d term is %d",n,sum/n);

}