#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    int y;
    y=x;
    float z = x-y;
    printf("fractional part of given number is %f",z);
    return 0;

}