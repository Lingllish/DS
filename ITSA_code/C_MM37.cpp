#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int inputx = 0, inputy = 0;
    scanf("%d %d",&inputx, &inputy);
    if(inputx==0 && inputy==0){
        printf("Origin\n");
    }
    else if(inputx==0){
        printf("y-axis\n");
    }
    else if(inputy==0){
        printf("x-axis\n");
    }
    else if(inputx>0){
        if(inputy>0) printf("1st Quadrant\n");
        else printf("4th Quadrant\n");
    }
    else if(inputy>0) printf("2nd Quadrant\n");
    else printf("3rd Quadrant\n");
    return 0;
}