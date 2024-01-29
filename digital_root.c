#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n>9){
        while(n>0){
            int rem=n%10;
            s+=rem;
            n/=10;
        }
    }
    printf("Digital root is %d",s);
}