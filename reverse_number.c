#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while (n>0){
        rem=n%10;
        printf("%d",rem);
        n/=10;
    }
}