#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    for(int i=1;i<=input;i++){
        printf("%d*%d=%d\n",i,i,i*i);
    }
    return 0;
}