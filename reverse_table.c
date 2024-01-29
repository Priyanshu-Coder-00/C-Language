#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Table of %d\n",n);
    for (int i=10;i>=1;i--){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}