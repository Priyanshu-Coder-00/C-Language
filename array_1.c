#include<stdio.h>
int main()
{
    int arr[5]={5,1,2,3,4};
    int n=5;
    for (int i=0;i<n;i++){
        if (arr[i]==i){
            printf("%d ",arr[i]);
        }
    }
}