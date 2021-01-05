#include<stdio.h>

int main(){
    long long int a = 0;
    while ((scanf("%lld",&a))!= EOF){
        printf("%lld %lld %lld\n",a,a*a, a*a*a);
    }
    return 0;
}