#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1; i<=n ; i=i+2){
        printf("Hello\n");
    }
    return 0;
}