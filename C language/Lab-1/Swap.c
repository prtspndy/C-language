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

    int temporary = first;
    first = second;
    second = temporary;

    printf("First = %d\n", first);
    printf("Second = %d\n", second);

    return 0;
}
