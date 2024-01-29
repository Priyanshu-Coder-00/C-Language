#include<stdio.h>
int Multiply(int a,int b);
int main(){
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    Multiply(x,y);
}
int Multiply(int a, int b){
    printf("%d x %d = %d",a,b,a*b);
    }
