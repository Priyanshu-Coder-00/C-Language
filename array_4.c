#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int x=9,c=0;
    for (int i=0;i<5;i++){
        if (arr[i]<x){
            c+=1;
        }
    }
    printf("%d",c);
}