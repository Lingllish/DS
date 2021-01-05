#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int inputa = 0, inputb = 0, inputc = 0, check = 0;
    scanf("%d %d %d",&inputa, &inputb, &inputc);
    if((inputa+inputb-inputc)<=0) check = 1;
    if((inputb+inputc-inputa)<=0) check = 1;
    if((inputa+inputc-inputb)<=0) check = 1;
    if(check) printf("unfit\n");
    else printf("fit\n");
    return 0;
}