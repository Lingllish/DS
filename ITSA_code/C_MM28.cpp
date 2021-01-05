#include<iostream>
#include<math.h>
using namespace std;

int main() {  
    int input;  
    while(cin >> input)  {  
        for(int i = 34;i <= input;i++){  
            if(i % 35 == 0){  
                if(input - i < 35) cout << i;  
                else cout << i << " ";   
            }  
        }  
        cout << "" << endl;  
    }  
    return 0;  
}  