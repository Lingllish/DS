#include<stdio.h>

int main(){
    int a = 0 , b = 0;
    scanf("%d %d",&a, &b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    if(a<0) printf("%d/%d=%d...%d\n",a,b,a/b-1,a%b+b);
    else printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
    return 0;
}