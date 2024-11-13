#include <stdio.h>
int main()
{
    float celcius,fahrenheit,kelvin;
    printf("Enter the temperature in Celcius");
    scanf("%f",&celcius);
    fahrenheit = (9.0/5.0 * celcius) + 32 ;
    printf("The temperature is fahrenheit is %f",fahrenheit);
    return 0;
}