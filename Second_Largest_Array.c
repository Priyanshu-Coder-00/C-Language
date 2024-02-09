#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int ans=INT_MIN,second;
    for (int i=0;i<n;i++){
        if (arr[i]>ans){
            ans=arr[i];
            second=INT_MIN;
            for (int j=0;j<n;j++){
                if (arr[j]!=ans){
                    second=max(second,arr[j]);
                }
            }
        }
    }
    printf("%d",second);
}