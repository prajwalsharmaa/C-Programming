#include <stdio.h>
int main(){
    // int value = 42;
    // int negative = -42;
    // printf("Basic Integer: %d\n",value);//42
    // printf("Field width 5: %5d\n",value);//---42
    // printf("Left Justified field width 5: %-5d\n",value);//42
    // // printf("Right Justified field width 5:")
    // printf("Zero padded field width 5:%05d\n",negative);//-0042
    // printf("Signed positive: %+d\n",value);//+42
    // printf("Signed negative: %-d\n",negative);//-42
    char str[4] ="1234";
    printf("%4.4s\n",str);
    printf("%-4.3s\n",str);
    printf("%-4.2s\n",str);
    printf("%-4.1s\n",str);
    
    /* Output:
My Nepal
My Nepa
My Nep
My Ne
My N
My
M
M
My N
My Ne
My Nep
My Nepa
My Nepal
*/
char Nepal[8]="My Nepal";  //[8] is the number of space used in 'My Nepal'

    printf("%-8.8s\n",Nepal);
    printf("%-8.7s\n",Nepal);
    printf("%-8.6s\n",Nepal);
    printf("%-8.5s\n",Nepal);
    printf("%-8.4s\n",Nepal);
    printf("%-8.3s\n",Nepal);
    printf("%-8.1s\n",Nepal);

    printf("%-8.1s\n",Nepal);
    printf("%-8.3s\n",Nepal);
    printf("%-8.4s\n",Nepal);
    printf("%-8.5s\n",Nepal);
    printf("%-8.6s\n",Nepal);
    printf("%-8.7s\n",Nepal);
    printf("%-8.8s\n",Nepal);

    return 0;
}
