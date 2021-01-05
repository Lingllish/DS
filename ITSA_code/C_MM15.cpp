#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input1 = 0, input2 = 0;
    scanf("%d %d",&input1, &input2);
    if(input1<=100 && input2<=100 && input2>=0 && input1>=0){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
    return 0;
}