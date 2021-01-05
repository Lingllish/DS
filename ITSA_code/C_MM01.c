#include<stdio.h>

int main(){
    int a = 0 , b = 0, c = 0;
    scanf("%d %d %d",&a, &b, &c);
    printf("Trapezoid area:%.1lf\n",(double)(a+b)*c/2);
    return 0;
}