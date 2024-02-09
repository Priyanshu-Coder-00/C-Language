#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int last=arr[len-1];
    printf("REAL ARRAY     ");
    for (int i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }
    for (int j=len-1;j>0;j--){
        arr[j]=arr[j-1];
    }
    arr[0]=last;
    printf("\nROTATED ARRAY  ");
    for (int i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }
}
