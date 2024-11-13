#include<stdio.h>
int main (){
    int numbers [5] = {640, 34, 65, 112, 22};
    int size = 5;
    int temp;
    printf("Original Array:\n");
    for(int i = 0; i < size; i++) {
        printf("%d\t", numbers[i]);
    }
    for(int i = 0;i < size;i++){
        for(int i = 0;i < size-1;i++){
            for(int j = 0;j < size - i -1;j++){
                if(numbers[j]>numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
                }
            }
        }
    }
    printf("\nSorted array in ascending order:\n");
    for(int i =0;i < size; i++){
        printf("%d\t",  numbers[i]);
    }
    printf("\n");
    return 0;
}