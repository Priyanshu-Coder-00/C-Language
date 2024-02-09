#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,5},n=5;
    int s=0,s1=0;
    for (int i=1;i<=n;i++){
        s+=i;
    }
    for (int i=0;i<n;i++){
        s1+=arr[i];
    }
    int ans=s-s1;
    if (ans==0){
        printf("No missing number.");
    }
    else{
        printf("%d",ans);
    }

}