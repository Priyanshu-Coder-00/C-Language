#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=__WINT_MIN__;
    for(int i=0;i<n;i++){
        if (ans<arr[i]){
            ans=arr[i];
        }
    }
    printf("%d",ans);
}