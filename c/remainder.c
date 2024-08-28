#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
     printf("Enter the second number:");
     scanf("%d",&b);
     int q=a/b;
    // int r=a-(b*q);//
    int r=a%b;

     printf("Remainder is %d",r);
     return 0;
     }