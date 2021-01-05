#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int input = 0, sum = 0;
    scanf("%d",&input);
    for(int n = 2; n<3572 && input>0; n++){
        int i = 2;
        for (i = 2; i < n && n % i != 0; i++);
        if(n == i) {
            input--;
            sum += i;
            printf("%d,",i);
        }
    }
    printf("\n%d\n",sum);
    return 0;
}