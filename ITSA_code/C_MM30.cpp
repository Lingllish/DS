#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input = 0;
    scanf("%d",&input);
    int i =2;
    for (i = 2; i < input && input % i != 0; i++);
	if (input == i) {
		printf("YES\n");
	}
    else printf("NO\n");
    return 0;
}