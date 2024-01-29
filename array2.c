#include<stdio.h>
int main()
{
    int p=1;
    int s=0;
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<=4;i++){
        if (arr[i]%2==0){
            p*=arr[i];
        }
        else{
            s+=arr[i];
        }
    }
    printf("Product of even number is %d\n",p);
    printf("Sum of even number is %d",s);
}