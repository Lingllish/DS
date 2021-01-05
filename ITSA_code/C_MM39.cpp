#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int input[3] ={0};
    scanf("%d %d %d",&input[0], &input[1], &input[2]);
    sort(input, input+3);
    if((input[0]+input[1]-input[2])<=0) printf("Not Triangle\n");
    else{
        if(input[0]*input[0]+input[1]*input[1] == input[2]*input[2])
            printf("Right Triangle\n");
        else if(input[0]*input[0]+input[1]*input[1] < input[2]*input[2])
            printf("Obtuse Triangle\n");
        else printf("Acute Triangle\n");
    }
    return 0;
}