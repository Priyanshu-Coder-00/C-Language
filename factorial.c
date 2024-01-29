#include<stdio.h>
int main()
{
    int n,f=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        f=f*i;
    }
    printf("Factorial of %d is %d",n,f);
}