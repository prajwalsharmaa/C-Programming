#include<stdio.h>
int main(){
    int numbers [1][2] = {
        {1,2,3},
        {5,6,7}
    };
    int numbers1 [1][2] = {
        {1,2,3},
        {1,2,3}
    };
    int sum [1][2];
    printf("The number at the position [1][1] is %d\n",numbers [1][1]);
    printf("The sum of the matrices is:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}