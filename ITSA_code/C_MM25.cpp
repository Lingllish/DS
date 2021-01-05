#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    int sum = 0;
    for(int i=1;i<=input;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}