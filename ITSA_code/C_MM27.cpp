#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input1 = 0,input2;
    scanf("%d %d",&input1, &input2);
    printf("%lld\n",((input2+input1)*(abs(input2-input1)+1))/2);
    return 0;
}