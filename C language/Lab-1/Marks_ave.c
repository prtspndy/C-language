#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,Total;
    float average;

    printf("Enter marks of 5 subjects : ");
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);

    Total = m1+m2+m3+m4+m5;
    average = Total/5.0;

    printf("Total = %d\n", Total);
    printf("Average = %2f", average);

    return 0;
}