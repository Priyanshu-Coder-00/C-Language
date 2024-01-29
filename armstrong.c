#include<stdio.h>
#include<math.h>
int main()
{
    int n,dig=0,rem,c=0,k;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    k=n;
    int l=n;
    while (l>0){
        int r=l%10;
        l/=10;
        dig+=1;
    }
    while (n>0){
        rem=n%10;
        n=n/10;
        c+=pow(rem,dig);
        printf("%d\n",c);
    }
    if (c==k){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
}