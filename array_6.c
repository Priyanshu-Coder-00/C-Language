#include<stdio.h>
int swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int k=2;
    int f=arr[k-1],l=arr[5-k];
    swap(f,l);
    for (int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}   