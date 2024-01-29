#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("BEFORE SWAPPING\n");
    printf("a = %d and b = %d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("AFTER SWAPPING\n");
    printf("a = %d and b = %d",a,b);
}