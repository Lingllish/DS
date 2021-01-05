#include<stdio.h>

int main(){
    double a = 0;
    while ((scanf("%lf",&a))!= EOF){
        printf("%0.1lf\n",a*a+0.05);
    }
    return 0;
}