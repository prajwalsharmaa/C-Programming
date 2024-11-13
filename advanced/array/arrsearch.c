#include<stdio.h>
int main()
{
    int numbers[7]={34, 43, 12, 32, 20, 300, 40};

    printf("The elements of the array are \n");

    int highest = numbers[0];
    int lowest = numbers[0];
    int i;
    int search = 300;
    int found = 0;

    if(numbers[i] == search){
        printf("Hurray found ...");
    }
    else{
        printf("Oops not found ...");
    }
    
    for ( i = 0; i < 7; i++){
        printf("%d\t", numbers[i]);

        if (numbers[i] > highest){
            highest = numbers[i];
        }

        if (numbers[i] < lowest){
            lowest = numbers[i];
        }

        if (numbers[i]==search){
            found = 1;
        }
    }

    if (found == 1){
        printf("\n Yes I found %d \n", search);
    }
    else{
        printf("Sorry not found %d \n", search);
    }

    printf("\n The highest number in the array is: %d\n", highest);
    printf("The lowest number in the array is: %d\n", lowest);

    return 0;
}