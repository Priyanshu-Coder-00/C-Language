#include<stdio.h>
int main()
{
    int a=5;
    int *ptr=&a;
    printf("%u\n",ptr);
    printf("%u\n",&a);
    printf("%d\n",*ptr);
}