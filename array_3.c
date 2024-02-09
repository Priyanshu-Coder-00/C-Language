#include<stdio.h>
int c=0;
int Palindrome(int n){
    int rem,s=0,k=n;
    while (n>0){
        rem=n%10;
        s=s*10+rem;
        n/=10;
    }
    if (s==k){
        return 1;
    }
}
int main()
{
    int arr[5]={121,1551,131,19891,1991};
    for (int i=0;i<5;i++){
        if (Palindrome(arr[i])==1){
            c=1;
        }
        else{
            c=0;
        }
    }
    if (c==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}