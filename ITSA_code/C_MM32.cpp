#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    int a = input%10;
    int b = (input/10)%10;
    int c = input/100;
    int d = pow(a,3);
    int e = pow(b,3);
    int f = pow(c,3);
    if((d+e+f)==input){
        printf("Yes\n");
    }
    else printf("No\n");
    return 0;
}