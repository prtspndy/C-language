#include <stdio.h>

int main(void)
{
    int n = 10;

    if (n > 5)
    {
        printf("%d is greater than 5", n);
    }
    else if (n < 5)
    {
        printf("%d is less than 5", n);
    }
    else
    {
        printf("%d is equal to 5", n);
    }

    return 0;
}
