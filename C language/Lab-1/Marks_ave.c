#include <stdio.h>

int main(void)
{
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int total;
    float average;

    printf("Enter marks for 5 subjects: ");
    if (scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5) != 5) {
        fprintf(stderr, "Please enter five whole numbers.\n");
        return 1;
    }

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5.0f;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
