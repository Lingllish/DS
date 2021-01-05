#include <iostream>  
#include<iomanip>  
using namespace std;  
      
int main() {  
    int input;  
    double sum;  
    while(cin >> input){  
        if(0 <= input && input <= 800){  
            sum = (double)input * 0.9;  
            cout << fixed << setprecision(1) << sum << endl;  
        }  
        else if(800 < input && input < 1500){  
            sum = (double)input * 0.9 * 0.9;  
            cout << fixed << setprecision(1) << sum << endl;  
        }  
        else if(input >= 1500){  
            sum = (double)input * 0.9 * 0.79;  
            cout << fixed << setprecision(1) << sum << endl;  
        }  
    }  
    return 0;  
}  
