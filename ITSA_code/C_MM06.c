#include<stdio.h>

int main(){
    int a = 0;
    while ((scanf("%d",&a))!= EOF){
        double b = 1.6*(double)a;
        printf("%0.1lf\n",b);
    }
    return 0;
}