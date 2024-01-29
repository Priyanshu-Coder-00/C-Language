#include<stdio.h>
int main()
{
    int c=0;
    int arr[5]={1,7,3,9,5};
    for (int i=0;i<=4;i++){
        if (arr[i]%2!=0){
            c+=1;
        }
    }
    printf("Total number of odd numbers is %d",c);
}