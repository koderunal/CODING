#include<stdio.h>
int main(){
    int x1;
    printf("Enter x coordinate of first point:");
    scanf("%d",&x1);
    int y1;
    printf("Enter y coordinate of first point:");
    scanf("%d",&y1);
    int x2;
    printf("Enter x coordinate of second point:");
    scanf("%d",&x2);
    int y2;
    printf("Enter xycoordinate of second point:");
    scanf("%d",&y2);
    int x3;
    printf("Enter x coordinate of third point:");
    scanf("%d",&x3);
    int y3;
    printf("Enter y coordinate of third point:");
    scanf("%d",&y3);
    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("Lies on Straight line ");

    }
    else{
        printf("not lies ");
    }
    return 0;

}