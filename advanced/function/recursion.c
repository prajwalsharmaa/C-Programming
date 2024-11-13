#include <stdio.h>
// int factorial(int n){
//     if(n == 1 || n == 0){
//         return 1;
//     }else{
//         return n * factorial(n -1);
//     }
// }
// int main(){
//     int number = 3;
//     int result = factorial(number);
//     printf("Factorial of %d is : %d\n", number, result);
//     return 0;
// }
int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}