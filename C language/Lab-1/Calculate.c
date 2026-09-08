#include <stdio.h>

int main(void)
{
    int first;
    int second;

    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2) {
        fprintf(stderr, "Please enter two integers.\n");
        return 1;
    }

    printf("Addition = %d\n", first + second);
    printf("Subtraction = %d\n", first - second);
    printf("Multiplication = %d\n", first * second);
    if (second == 0) {
        printf("Division is undefined when the second number is zero.\n");
    } else {
        printf("Division = %d\n", first / second);
    }

    return 0;
}
