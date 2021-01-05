#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    printf("%d days\n",input/86400);
    printf("%d hours\n",(input%86400)/3600);
    printf("%d minutes\n",(input%86400%3600)/60);
    printf("%d seconds\n",(input%86400%3600)%60);
    return 0;
}