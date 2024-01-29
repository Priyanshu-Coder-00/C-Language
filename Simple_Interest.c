#include <stdio.h>
int main()
{
    float Principle, Rate, Time, SI;
    printf("Enter the value of Principle: ");
    scanf("%f", &Principle);
    printf("Enter the value of rate: ");
    scanf("%f", &Rate);
    printf("Enter the value of time: ");
    scanf("%f", &Time);
    SI = (Principle * Rate * Time) / 100;
    printf("Simple Interest: %f", SI);
}