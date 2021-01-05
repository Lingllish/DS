#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input1 = 0, input2 = 0;
    scanf("%d %d",&input1, &input2);
    int sa = input2*60;
    if(input1<=60){
        printf("%.1lf\n",(double)sa);
    }
    else if(input1>60 && input1<=120){
        printf("%.1lf\n",(double)sa+(double)(input1-60)*(double)input2*1.33);
    }
    else{
        double sal = (double)sa+(double)input2*60*1.33;
        printf("%.1lf\n",sal+(double)(input1-120)*(double)input2*1.66);
    }
    return 0;
}