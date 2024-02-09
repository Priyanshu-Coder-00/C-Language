#include<stdio.h>
int main()
{
    int arr[6]={1,0,1,0,0,1},n=6;
    int start=0,end=n-1;
    while (start<end){
        if (arr[start]==0){
            start++;
        }
        else{
            if (arr[end]==0){
                int t=arr[start];
                arr[start]=arr[end];
                arr[end]=t;
                start++;
            }
            else{
                end--;
            }
        
        }
    }
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}