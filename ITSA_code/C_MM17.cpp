#include<iostream>
#include<math.h>
using namespace std;

int gcd(int t,int v){
    if(t%v==0){
        return v;
    }
    else return gcd(v,t%v);
}

int main(){
    int input1 = 0, input2 = 0;
    scanf("%d %d",&input1, &input2);
    printf("%d\n",gcd(input1,input2));
    return 0;
}