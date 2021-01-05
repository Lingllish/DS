#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int input = 0, sum = 1;
    scanf("%d",&input);
    if(input == 1) printf("1 = 1\n");
    else{
        printf("1 ");
        for(int i=2; i<=input; i++){
            printf("+ %d ",i);
            sum+=i;
        }
        printf("= %d\n",sum);
    }
    return 0;
}