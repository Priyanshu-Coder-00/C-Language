#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter the value of n: "); 
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        s+=i;
    }
    printf("Sum of numbers upto %d is %d",n,s);

}