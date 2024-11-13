
#include<stdio.h>
int main(){
    
    int arr[] = {10,25,986,78};
    int min = arr[0];
    int max = arr[0];
    for( int i=0;i<4;i++){

        if(arr[i]<=min){
            min = arr[i];
        }
        if(arr[i]>=max){
            max = arr[i];
        }                            
    }
    printf("min = %d\n",min);
    printf("max = %d",max);

    return 0;
}