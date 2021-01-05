#include<stdio.h>

int main(){
    long long int a = 0 , b = 0;
    while ((scanf("%lld %lld",&a, &b))!= EOF){
        printf("%lld\n",(a+b)*(a+b));
    }
    return 0;
}