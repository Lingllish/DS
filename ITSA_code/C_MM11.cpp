#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    printf("NT10=%d\n",input/10);
    printf("NT5=%d\n",(input%10)/5);
    printf("NT1=%d\n",(input%10)%5);
    return 0;
}