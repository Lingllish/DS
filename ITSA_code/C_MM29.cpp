#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    for(int n=input-1;n>=2;n--){
        int i =2;
        for (i = 2; i < n && n % i != 0; i++);
		if (n == i) {
			printf("%d\n",i);
            break;
		}
    }
    return 0;
}