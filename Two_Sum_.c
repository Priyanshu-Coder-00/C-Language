#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},target=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}