#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int array[6] = {0};
    long int sum = 0;
    for(int i=0;i<6;i++){
        scanf("%d",&array[i]);
        sum += array[i]*array[i]*array[i];
    }
    printf("%ld\n",sum);
    return 0;
}