#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    printf("Average of %d, %d, %d is %f", a, b, c, avg);
}