#include <stdio.h>
#include <stdlib.h>

int[][] changeString(int[][] matr, int sL,int changingNum){
    for (int i = 0; i < sL count; i++)
    {
      matr[changingNum][i] = changingNum;
    }
return
}

int main(){
    int stringLenth =10;
    int rowLenth = 10;
    int matrix[stringLenth][rowLenth];
    for (int i = 1; i < rowLenth; i++)
    {
        for (int j = 1; j < stringLenth; j++)
        {
            matrix[i][j] = i*j;
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
        
    }
    return 0;
    
}