#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    for(int i=1;i<=input;i++){
        if(input%i==0){
            if(input==i) printf("%d\n",i);
            else printf("%d ",i);
        }
    }
    return 0;
}