#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=0;
    for(int i=2; i<=n-1 ; i=i+1){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0)printf("Number is prime ");
    else printf("Number is composite");
    return 0;
}