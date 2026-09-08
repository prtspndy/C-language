#include <stdio.h>

int main(void)
{
    float fahrenheit;
    float celsius;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) {
        fprintf(stderr, "Please enter a number.\n");
        return 1;
    }

    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;

    printf("Temperature in Celsius = %.2f\n", celsius);
    return 0;
}
