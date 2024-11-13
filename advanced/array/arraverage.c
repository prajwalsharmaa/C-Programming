#include <stdio.h>
int main()
{
    float marks[5];
    float sum = 0;

    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("Marks for subject %d is %f\n", i + 1, marks[i]);
    }

    printf("The sum of all marks given is: %.2f\n", sum);

    float average;
    average = sum / 5;
    printf("The average marks is: %.2f\n", average);
    return 0;
}