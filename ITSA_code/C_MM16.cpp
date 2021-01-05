#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input1 = 0, input2 = 0;
    scanf("%d %d",&input1, &input2);
    if(sqrt(input1*input1+input2*input2)<=200){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
    return 0;
}