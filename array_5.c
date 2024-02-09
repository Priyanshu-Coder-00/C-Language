#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,4};
    int find_index=4;
    for (int i=0;i<5;i++){
        if (arr[i]==find_index){
            printf("%d ",i);
        }
    }
}