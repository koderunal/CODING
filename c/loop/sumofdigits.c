#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum=0;
    int lastdigit;
    while(n!=0){
        lastdigit=n%10;
        n=n/10;
        sum=sum+lastdigit;
    }
    printf("the sum of digits are %d",sum);
    return 0;
}