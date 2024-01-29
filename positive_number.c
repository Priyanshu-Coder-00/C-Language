#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is Positive.", n);
    }
    else if (n == 0)
    {
        printf("%d is zero", n);
    }
    else if (n < 0)
    {
        printf("%d is negative.", n);
    }
    else
    {
        printf("INVALID INPUT. PLEASE ENTER INTEGER VALUE");
    }
}