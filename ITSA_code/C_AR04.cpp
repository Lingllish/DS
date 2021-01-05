#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
    int array[100][100] = {0};
    int cnt = 0, row=0, col=0;
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++){
        scanf("%d %d",&row, &col);
        for(int j=0;j<row;j++){
            for(int k=0;k<col;k++){
                scanf("%d",&array[j][k]);
            }
        }
        for(int j=0;j<row;j++){
            for(int k=0;k<col;k++){
                if(array[j][k]==0) printf("_ ");
                else if(array[j-1][k]==0||array[j+1][k]==0||array[j][k-1]==0||array[j][k+1]==0){
                    printf("0 ");
                }
                else printf("_ ");
            }
            printf("\n");
        }
        memset(array,0,sizeof(array));   
    }
    return 0;
}