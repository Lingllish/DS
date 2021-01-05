#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a = 0;
    while ((scanf("%d",&a))!= EOF){
        if(a>=31){
            printf("Value of more than 31\n");
        }
        else{
            a = pow(2,a);
            printf("%d\n",a);
        }
    }
    return 0;
}