#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int a=__INT_MAX__;
    printf("%d\n",a);
    for (int i=0;i<5;i++){
        if (arr[i]<a){
            a=arr[i];
        }
    }
    printf("%d",a);
}