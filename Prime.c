// #include<stdio.h>
// int main()
// {
//     int n,c=0;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//     if (n<2){
//         c=2;
//     }
//     else{
//         for (int i=2;i<n;i++){
//             if (n%i==0){
//                 c=1;
//                 break;
//             }
//         }
//     }
//     if (c==1){
//         printf("Not a Prime number");
//     }
//     else if (c==0){
//         printf("Prime number");
//     }
//     else{
//         printf("Neither Prime nor Composite");
//     }
// }
#include<stdio.h>
void Prime(int n){
    int c=0;
    if (n<2){
        c=2;
    }
    else{
        for (int i=2;i<n;i++){
            if (n%i==0){
                c=1;
            }
            else{
                c=0;
            }
        }
    }
    if (c==0){
        printf("Prime number");
    }
    else if (c==1){
        printf("Not a Prime number");
    }
    else{
        printf("Niether Prime nor composite");
    }
}
int main()
{
   Prime(2); 
}