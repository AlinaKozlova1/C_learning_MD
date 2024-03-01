#include <stdio.h>
#include <stdlib.h>

void printArray(char arr[], int arrSize){
    
    for (int i = 0; i <= arrSize; i++)
    {
        printf("\n%c", arr[i]);
    }
}

int main(){
    int arraySize = 8;
    char arr[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        arr[i] = '#';
    }
    // printf("%s", arr);
    printArray(arr, arraySize);
    
    return 0;
    
}
