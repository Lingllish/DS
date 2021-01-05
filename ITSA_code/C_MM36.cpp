#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    if(input==3||input==4||input==5){
        printf("Spring\n");
    }
    else if(input==6 || input==7 || input==8){
        printf("Summer\n");
    }
    else if(input==9 || input==10 || input == 11){
        printf("Autumn\n");
    }
    else{
        printf("Winter\n");
    }
    return 0;
}