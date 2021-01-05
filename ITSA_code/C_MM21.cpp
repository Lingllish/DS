#include<iostream>
#include<math.h>
using namespace std;

long long int factorial(long long int num){
    if (num == 0 || num == 1) return 1;
    else return num * factorial(num - 1);
}

int main(){
    int input = 0;
    scanf("%d",&input);
    printf("%lld\n",factorial(input));
    return 0;
}