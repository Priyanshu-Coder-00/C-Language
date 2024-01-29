// #include<stdio.h>
// int t;
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int i=0;
//     int j=4;
//     while (i<j){
//         t=arr[i];
//         arr[i]=arr[j];
//         arr[j]=t;
//         arr[i],arr[j];
//         i++;
//         j--;
//     }
//     for (int i=0; i<5;i++){
//         printf("%d\t",arr[i]);
//     }
// }
#include<stdio.h>
int main()
{
    char arr[5]={'a','b','c','d'};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=n-1;
    while (i<j){
        int t;
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
    for (int i=0;i<n;i++){
        printf("%c\t",arr[i]);
    }
}